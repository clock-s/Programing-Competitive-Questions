#include <iostream>

using namespace std;

struct Pessoas{
  int numP;
  string nameP;  
};

void receber_nomes(Pessoas &p){
  cin >> p.numP;
  p.nameP[p.numP];
  int i =p.numP;
  while(i){
    cin >> p.nameP[p.numP - i];
  }
}

bool name_exist(Pessoas &p, string name){
  for(int i=0; i<p.numP; i++){
    if(name == p.nameP) return true;
  }
  return false;
}

bool verifica(Pessoas &p, string name){
  bool retorna = true;
  for(int i = 0; i < name.size(); i++){
    if(name[i] != p.nameP[i]){
      retorna = false;
        return retorna;
    }
  }
  return retorna;
}

int main(){
  Pessoas p;
  receber_nomes(p);
  int test;
  string namer;
  cin >> test;
  for(int i = 0; i < test; i++){
    cin >> namer;
    if(name_exist(p,namer)){
      cout << "Jebb\n";
      break;
    }
    else if(namer.size() < p.nameP.size() && verifica(p, namer)){
      cout << "Neibb en " << p.nameP << " er heima\n";
    }
    else cout << "Neibb\n";
  }
  return 0;
}
