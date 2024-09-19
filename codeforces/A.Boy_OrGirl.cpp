#include <iostream>

int main (int argc, char *argv[]) {
  std::string name;
  bool chars[26] = {};
  int count = 0;

  std::cin >> name;

  for(int i = 0 ; i < name.size(); i++)
  {
    if(chars[name[i] - 'a'] == false)
    {
      chars[name[i] - 'a'] = true;
      ++count;
    }
  }

  (count % 2) ? std::cout << "IGNORE HIM!" : std::cout << "CHAT WITH HER!";



  


  return 0;
}
