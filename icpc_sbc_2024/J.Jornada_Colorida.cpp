#include <iostream>
#include <utility>
#include <vector>
#include <stack>


using namespace std;

bool chegou = false;
stack<int> ordem;



void caminho(vector<vector<pair<int, int>>> &caminhos, int cidade, vector<bool> passou, int estrada_anterior, int cor_anterior, int &primeira_cor){
  if(chegou){
    ordem.push(estrada_anterior);
    return;
  }

  passou[estrada_anterior] = true;
  bool completo = true;

  for(bool i : passou){
    if(i == false){
      completo = false;
      break;
    }
  }

  if(cor_anterior == primeira_cor){
    completo = false;
  }

  if(completo){
    chegou = true;
    ordem.push(estrada_anterior);
    return;
  }


  

  
  for(int i = 0 ; i < caminhos[cidade].size() ; i++){
    if(caminhos[cidade][i].first != 0 && caminhos[cidade][i].first != cor_anterior && passou[caminhos[cidade][i].second] == false){
      caminho(caminhos, i, passou, caminhos[cidade][i].second, caminhos[cidade][i].first, primeira_cor);
    }
    if(chegou) break;
  }

  if(chegou){
    ordem.push(estrada_anterior);
  }

}



int main (int argc, char *argv[]) {
  
  int N, M, K;

  cin >> N >> M >> K;


  vector<vector<pair<int,int>>> cidade(N,vector<pair<int,int>>(N));

  vector<bool> passou(M, 0);

  for(int i = 0 ; i < M ; i++ ){
    int I, J, C;

    cin >> I >> J >> C;

    cidade[I-1][J-1].first = C;
    cidade[J-1][I-1].first = C;

    cidade[I-1][J-1].second = i;
    cidade[J-1][I-1].second = i;

    
  }


  int inicioi = 0;
  int inicioj = 0;
  for(int i = 0 ; i < cidade.size() ; i++){
    for(int j = 0 ; j < cidade[i].size() ; j++){
      if(cidade[i][j].first != 0)
        caminho(cidade, j, passou, cidade[i][j].second, cidade[i][j].first, cidade[i][j].first);
      
      inicioj = j;
      if(chegou){
        break;
      }
    }
    inicioi = i;
    if(chegou){
      break;
    }
  }

  for(int i = 0 ; i < cidade.size() ; i++){
    for(int j = 0 ; j < cidade[i].size() ; j++){
      cout << cidade[i][j].first << " ";
      
    }

    cout << endl;
  }


cout << endl;

  
  



  if(!chegou){
    cout << -1;
  }else{
    cout << inicioi << " " << inicioj << endl;


    while(!ordem.empty()){
      cout << ordem.top()+1 << " ";
      ordem.pop();
    }

  }


  
  return 0;
}
