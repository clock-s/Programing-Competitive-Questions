#include <iostream>

using namespace std;

int main() {
  int N, M;

  int contador = 0;
  do {
    cin >> N >> M;
    if (N == 0 && M == 0)
      break;

    int *jack = new int[N];
    int *jill = new int[M];

    for (int i = 0; i < N; i++) {
      cin >> jack[i];
    }
    for (int i = 0; i < M; i++) {
      cin >> jill[i];
    }

    int i = 0;
    int j = 0;
    while (i < N && j < M) {
      if (jack[i] > jill[j])
        j++;
      else if (jack[i] < jill[j])
        i++;
      if (jack[i] == jill[j] && jack[i]) {
        contador++;
        i++;
        j++;
      }
    }

    cout << contador << "\n";
    contador = 0;

    delete[] jack;
    delete[] jill;
  } while (N != 0 && M != 0);
}
