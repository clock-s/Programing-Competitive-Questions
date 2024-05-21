#include <iostream>

using namespace std;

int main() {
  int N, T, Q, D;

  cin >> N >> Q;

  int *quest = new int[N];
  int *list = new int[Q];

  for (int i = 0; i < N; i++) {
    cin >> quest[i];
  }

  for (int i = 0; i < Q; i++) {
    cin >> T >> D;

    if (T == 1) {
      int max;
      int index;

      index = -1;
      max = D;
      for (int j = 0; j < N; j++) {
        if (quest[j] > max) {
          max = quest[j];
          index = j;
        }
      }

      if (index != -1) {
        list[i] = max;
        quest[index] = -1;
      } else {
        list[i] = -1;
      }
    }

    if (T == 2) {
      int min;
      int index;

      index = -1;
      min = D;
      for (int j = 0; j < N; j++) {
        if (quest[j] > -1 && quest[j] <= min) {
          min = quest[j];
          index = j;
        }
      }

      if (index != -1) {
        list[i] = min;
        quest[index] = -1;
      } else {
        list[i] = -1;
      }
    }
  }

  for (int i = 0; i < Q; i++) {
    cout << list[i] << "\n";
  }

  delete[] quest;
  delete[] list;
  return 0;
}
