#include <iostream>

using namespace std;

int countAscii(string);

int main() {
  string word;

  cin >> word;

  cout << countAscii(word);

  return 0;
}

int countAscii(string x) {
  int count = 0;

  for (int i = 0; i < x.size(); i++)
    // LOW case --- UP case
    if ((x[i] > 96 && x[i] < 123) || (x[i] > 64 && x[i] < 91))
      count++;

  return count;
}
