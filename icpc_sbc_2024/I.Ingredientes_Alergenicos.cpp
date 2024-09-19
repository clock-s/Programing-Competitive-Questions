#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;



//Necessário checar a velocidade

int main (int argc, char *argv[]) {
  int N;

  cin >> N;

  vector<int> ingredientes(N);

  for(int i = 0 ; i < N ; i++){
    cin >> ingredientes[i];
  }
  

  int P;
  cin >> P;

  for(int i = 0 ; i < P ; i++){
    int alergia;
    cin >> alergia;
    int contador = 0;

    if(alergia == 1){
      contador = N;
      goto jump;
    }

    for(int j = 0 ; j < N ; j++){
      if(ingredientes[j] == 1){
        contador++;
        continue;
      }
      if(!(gcd(ingredientes[j], alergia) > 1)){
        contador++;
      }
    }

  jump:
    cout << pow(2,contador) << endl;
  }

  
  return 0;
}






