#include <iostream>
#include <vector>

using namespace std;


bool check(vector<int> &num, vector<int> &dp, vector<int> &pass, string color, int n){
  int count = 0;
  while(pass[n] != 1){
    if(color[n] == '0'){
      count++;
    }
    pass[n] = 1;
    n = num[n] - 1;
  }

  while(pass[n] != 2){
    pass[n] = 2;
    dp[n] = count;
    n = num[n] - 1;

  }


  return false;

}

int main (int argc, char *argv[]) {
  int N;
  cin >> N;

  while(N--){
    int n;
    string color;

    cin >> n;
    vector<int> num(n);
    vector<int> pass(n);
    vector<int> dp(n);

    for(int i = 0 ; i < n ; i++){
      cin >> num[i];
    }

    cin >> color;
    for(int i  = 0 ; i < color.size() ; i++){
      if(color[i] == '0' && pass[i] == 0) 
        check(num, dp, pass, color, i);
    }
  


    for(auto i : dp){
      cout << i << " ";
    }
    cout << endl;
    



  }
  
  return 0;
}
