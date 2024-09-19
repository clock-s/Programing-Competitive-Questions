#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int N;

  cin >> N;

  while(N--){
    int a, b;
    bool can = false;

    cin >> a >> b;

    if(a > 0 && b > 0){
      if((a+2*b) % 2 == 0) can = true; 
    }

    if(a == 0 && b > 0){
      if(b%2 == 0) can = true;
    }
    if(a > 0  && b == 0){
      if(a % 2 == 0) can = true;
    }

    if(a == 0 && b == 0)
      can = true;

    
  
    (can) ? cout << "Yes" : cout << "No";

    cout << endl;

  }

  
  return 0;
}
