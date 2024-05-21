#include <iostream>

using namespace std;

int main() {
  int countK, countB;
  countK = countB = 0;
  string word = {};

  cin >> word;

  for (int i = 0; i < word.size(); i++) {
    if (word[i] == 'b' || word[i] == 'B') {
      countB++;
    }
    if (word[i] == 'k' || word[i] == 'K') {
      countK++;
    }
  }

  if (countK > countB)
    cout << "kiki";
  else if (countB > countK)
    cout << "boba";
  else if (countB == countK && countB != 0)
    cout << "boki";
  else
    cout << "none";

  return 0;
}
