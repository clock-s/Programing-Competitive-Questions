#include <algorithm>
#include <iostream>

using namespace std;

struct range{
  int begin;
  int end;
};


int main (int argc, char *argv[]) {
  int N;
  

  cin >> N;

  while(N--){
    int door[105] = {};
    range alice, bob;
    
    cin >> alice.begin >> alice.end;
    cin >> bob.begin >> bob.end;

    door[alice.begin-1]++;
    for(int i = alice.begin ; i <= alice.end ; i++){
      door[i]++;
    }

    door[bob.begin-1]++;
    for(int i = bob.begin ; i <= bob.end ; i++){
      door[i]++;
    }

    int begin = min(alice.begin, bob.begin);
    int end = max(alice.end, bob.end);
    
    int count = 0;
    bool flag = false;
    for(int i = begin-1 ; i <= end+1 ; i++){
      if(door[i] > 1) {
        count++;
        flag = true;
      }
    }
    if(bob.begin == alice.begin) count--;
    if(bob.end == alice.end) count--;
    if(flag == false) count++;
    
  
    cout << count << endl;




  }

  return 0;
}
