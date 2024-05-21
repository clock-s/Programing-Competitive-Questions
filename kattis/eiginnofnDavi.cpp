#include <iostream>

using namespace std;

bool checador(string &, string &);

int main() {
  int N;

  cin >> N;

  string *nomes = new string[N];

  getline(cin, nomes[0]);
  // Recebendo os valores
  for (int i = 0; i < N; i++) {
    getline(cin, nomes[i]);
  }

  cin >> N;
  string namer;
  int cases;
  // cases = 1 -> encontrei o mesmo nome -> Leva a um break
  // cases = 2 -> namer contido no nome -> Leva ao break
  // cases = 3 -> não encontrei (pior caso)

  for (int i = 0; i < N; i++) {
    cin >> namer;

    // checagem do resultado
    cases = 3;
    for (int j = 0; j < N; j++) {
      if (namer == nomes[j]) {
        cases = 1;
        break;
      } else if (namer.size() <= nomes[j].size() && checador(namer, nomes[j])) {
        cases = 2;
        break;
      } else {
        cases = 3;
      }
    }

    // Resultados, após ter um caso definido

    if (cases == 1)
      cout << "Jebb\n";
    else if (cases == 2)
      cout << "Neibb en " << nomes[i] << " er heima\n";
    else
      cout << "Neibb\n";
  }

  return 0;
}

bool checador(string &nMenor, string &nMaior) {
  int size = nMenor.size();

  for (int i = 0; i < size; i++) {

    if (nMenor[i] != nMaior[i])
      return 0;
  }

  return 1;
}
