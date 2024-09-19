#include <iostream>
#include <vector>

using namespace std;


int main (int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  

  cin >> N;

  vector<int> num(N);

  int n, before, pos = 0;
  int mask = 0;
  for(int i = 0 ; i < N ; i++){
    cin >> n;
    if(i == 0) {
      num[0] = n;
      continue;
    }
    
    mask = n | mask;

    while(pos <= i && (num[pos] ^ mask) != 0 && mask != 0){
      before = num[pos];
      num[pos] = before | mask;
      mask = before & mask;
      n = before & n;
      pos++;
    }
    pos = 0;
    
    num[i] = n;
  }

  /*
  for(int j = 1 ; j < N ; j++){
    before = num[j];
    num[j] = before | num[j-1];
    num[j-1] = before & num[j-1];
  }

  for(int j = 1 ; j < N ; j++){
    before = num[j-1];
    num[j-1] = before | num[j];
    num[j] = before & num[j];
  }
  for(int i = 0 ; i < N ; i++)

  for(int j = N -1 ; j > 0 ; j--){
    before = num[j];
    num[j] = before | num[j-1];
    num[j-1] = before & num[j-1];
  }


  for(int i = 1 ; i < N ; i++){
    for(int j = i+1 ; j < N ; j++){
      before = num[i];
      num[i] = before | num[j];
      num[j] = before & num[j];
    }
  }
*/

  for(int i = 0 ; i < N ; i++){
    cout << num[i] << " ";
  }
  
  return 0;
}
