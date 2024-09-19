#include <iostream>

using namespace std;

void permut(int &a, int &b, int dif, int N, int &max){
  N++;
  int mid = a + dif;
  if(mid > b){
    return;
  }


  for(int i = 1 ; i < b-mid ; i++){
    if(b-mid > dif+i){
      permut(mid,b,dif+i, N, max);
    }
  }

  if(N > max){
    max = N;
  }
}

int main (int argc, char *argv[]) {
  int N;
  cin >> N;

  while(N--){
    int a, b;
    int max = 0;
    int N = 0;
    cin >> a >> b;
    int cont = 0;
    
    while(cont*(cont+1) <= 2*(b-a)){
      ++cont;
    }

    
    
    cout << cont << endl;

  }


  return 0;
}
