#include <iostream>

using namespace std;

int main() {
  string N;
  int copia = 0;
  int numero = 0;

  cin >> N;

  // Melhor caso N < 99
  if (N.size() <= 2) {
    cout << 99;
    return 0;
  }

  for (int i = 0; i < N.size(); i++) {
    if (N.size() - i >= 3)
      copia = copia * 10 + (N[i] - '0');
    else
      copia = copia * 10;

    numero = numero * 10 + (N[i] - '0');
  }

  int min = copia - 1;
  int max = copia + 99;

  if ((numero - min) < (max - numero))
    cout << min;
  else
    cout << max;

  return 0;
}
