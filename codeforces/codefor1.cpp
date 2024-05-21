#include <iostream>
#include <vector>

using namespace std;

void increaseSize(vector<int> &x) {
  x.push_back(0);
  x.push_back(0);
}

void arrastVector(vector<int> &x, int index, int size) {
  for (int i = size - 1; i >= index; i--) {
    x[i + 2] = x[i];
  }
}

void modifyVector(vector<int> &x, int index) {

  // Separa o valor do index em 3 partes e aloca
  if (x[index] != 1 && x[index] != 0) {
    // Cria espaço para o novo vetor
    increaseSize(x);

    // Coloca todos os valores 2 casas para frente, onde estaram os dois novos
    // valores do vetor
    arrastVector(x, index, x.size());

    // Guarda o valor do index comparado
    int comparador = x[index];

    x[index] = comparador / 2;
    x[index + 1] = comparador % 2;
    x[index + 2] = comparador / 2;
  }

  // Se eu conseguir chegar no ultimo valor, quer dizer que ele é 1, então sai
  if (index == x.size() - 1)
    return;

  // Se for um numero diferente de 1 e 0, eu tenho que tratalo até ele se tornar
  // o numero 1
  if (x[index] != 1 && x[index] != 0)
    modifyVector(x, index);

  // Se for 1 ou 0, ignora e passa pro proximo
  else
    modifyVector(x, index + 1);
}

int main() {
  vector<int> V;     // vector
  int num, min, max; // range

  cin >> num >> min >> max;

  V.push_back(num);

  modifyVector(V, 0);

  int sum = 0;
  for (int i = 0; i < V.size(); i++) {
    cout << V[i] << " ";
    sum += V[i];
  }
  cout << '\n';

  cout << "Soma: " << sum << endl;

  return 0;
}
