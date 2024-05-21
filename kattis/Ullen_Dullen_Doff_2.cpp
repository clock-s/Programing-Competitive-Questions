#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;

  string words[20] = {};
  string list[20] = {};

  for (int i = 0; i < N; i++) {
    cin >> words[i];
  }

  if (N < 13) {
    list[(13 % N) - 1] = words[0];
  } else {
    list[12] = words[0];
  }
  words[0] = "";

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (list[i] == "" && words[j] != "") {
        list[i] = words[j];
        words[j] = "";
        break;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    cout << list[i] << '\n';
  }

  return 0;
}
