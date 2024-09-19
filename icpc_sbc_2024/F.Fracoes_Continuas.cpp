#include <iostream>

using namespace std;


int main (int argc, char *argv[]) {
  int N;

  cin >> N;
  int a = 1;
  int b = 2;

  for(int i = 0 ; i < N-1 ; i++){
    int x = a;
    a = b;
    b = x+b;
  }

  cout << a << endl;

  
  return 0;
}
