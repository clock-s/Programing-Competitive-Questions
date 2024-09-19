#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
  int N;

  cin >> N;

  vector<vector<int>> estojo(N,vector<int>(N));

  for(int i = 0 ; i < N ; i++){
    for(int j = 0 ; j < N ; j++){
      cin >> estojo[i][j];
    }
  }

  if(estojo[0][0] < estojo[0][1] && estojo[0][0] < estojo[1][0]){
    cout << 0 << endl;
  }else if(estojo[0][0] > estojo[0][1] && estojo[0][0] < estojo[1][0]){
    cout << 1 << endl;
  }else if(estojo[0][0] > estojo[0][1] && estojo[0][0] > estojo[1][0]){
    cout << 2 << endl;
  }else if(estojo[0][0] < estojo[0][1] && estojo[0][0] > estojo[1][0]){
    cout << 3 << endl;
  }


  return 0;
}
