#include <iostream>
#include <vector>

using namespace std;

//AINDA NÃO COMPLETO
//

bool check(vector<int> &num, vector<bool> pass,int target, int n, vector<vector<bool>> &dp, int &dp_index, int &target_id){
  
  if(dp[dp_index][target_id] == true){
    return true;
  }

  while(pass[n] != true){
    if(target == num[n]) return true;
    pass[n] = true;
    dp[dp_index][n] = true;
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
    vector<bool> pass(n);
    //vector<vector<int>> dp(n,num);

    for(int i = 0 ; i < n ; i++){
      cin >> num[i];
    }

    cin >> color;
    int dp_size = 0;
    for(int i  = 0 ; i < color.size() ; i++){
      if(color[i] == '0') dp_size++;
    }
    //vector<vector<bool>> dp(dp_size, vector<bool>(n));
    vector<vector<bool>> *dp = new vector<vector<bool>>(dp_size,vector<bool>(n));
    
    for(int i  = 0 ; i < num.size() ; i++){
      int count = 0;
      int dp_index = 0;
      for(int j = 0 ; j < color.size() ; j++){
        if(color[j] == '0'){
          if(check(num, pass, num[i],j,*dp, dp_index, i)){
            count++;
          }
          dp_index++;
        }
      }
      cout << count << " ";
    }
    cout << endl;
    delete dp;
    dp = nullptr;
    



  }
  
  return 0;
}
