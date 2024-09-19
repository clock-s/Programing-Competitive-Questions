#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int N;
  cin >> N;

  while(N--){
    int size_S;
    string square;
    bool square_shape = false;
    bool it_square = false;
    int L;
    cin >> size_S;
    cin >> square;

    for(int i = 0 ; i < size_S ; i++){
      if(i*i == size_S){
        it_square = true;
        L = i;
      }
    }

    

    if(it_square){
      for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < L ; j++){
          if(i == 0 || i == L-1){
            if(square[L*i+j] == '0'){
              it_square = false;
            }
          }else if(j == 0 || j == L-1){
            if(square[L*i+j] == '0'){
              it_square = false;
            }
          }else{
            if(square[L*i+j] == '1'){
              it_square = false;
            }
          }
          if(!it_square) break;
        }
        if(!it_square) break;
      }
    }

    it_square ? cout << "Yes" : cout << "No";
    cout << endl;

  }


  return 0;
}
