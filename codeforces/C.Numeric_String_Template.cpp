#include <iostream>
#include <vector>
#include <map>

using namespace std;
//incompleta

int main (int argc, char *argv[]) {
  int N;

  cin >> N;

  while(N--){
    int size;
    cin >> size;
    
    vector<int> list(size);
    for(int i = 0 ; i < size ; i++){
      cin >> list[i];
    }
    
    int n;
    cin >> n;
    while(n--){
      bool pass = true;
      string name;
      cin >> name;

      map<int,char> number_char;
      map<char,int> char_number;

      if(name.size() != size){
        pass = false;
        cout << "NO" << endl;
        continue;
      }
      
      for(int i = 0 ; i < size ; i++){
        if(auto search = char_number.find(name[i]) ; search != char_number.end()){
          if(search->second != list[i]) pass = false;
        }else {
          if(auto search2 = number_char.find(list[i]) ; search2 != number_char.end()){
            pass = false;
          }else{
            number_char[list[i]] = name[i];
            char_number[name[i]] = list[i];
          }
        }

      }


      pass ? cout << "YES" : cout << "NO";

      cout << endl;



    }
    
  


  }


  return 0;
}
