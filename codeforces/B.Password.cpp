#include <iostream>
#include <vector>

//doesn't work correctly now


int main (int argc, char *argv[]) {
  std::string array;

  std::cin >> array;
  int n = array.size();

  std::vector<int> z(n);

  for(int i = 1 ; i < array.size() ; ++i){
    while((z[i] + i) < n && (array[i+z[i]] == array[z[i]])){
      ++z[i];
    }
  }

  int max = 0; int index = 0; bool exist = false;
  for(int i = 0 ; i < n ; ++i){
    std::cout << z[i] << " ";
    if(max < z[i] && !(z[i] + i >= n)) {
      exist = true;
      max = z[i];
      index = i;
    };
  }
  
  std::cout << std::endl;
  exist ? std::cout << array.substr(index,z[index]) : std::cout << "Just a legend";

  return 0;
}
