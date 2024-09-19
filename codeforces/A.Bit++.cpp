#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  int number = 0;

  cin >> n;

  while(n--){
    string txt;
    cin >> txt;

    for(int i = 0 ; i < txt.size() ; i++){
      if(txt[i] == '+'){
        number++;
        break;
        }
      if(txt[i] == '-'){
        number--;
        break;
        }
    }

  }

  cout << number << endl;
  
  return 0;
}
