#include <iostream>
#include <map>
#include <queue>

using namespace std;

int main() {
  map<string, int> contador;
  string palavras;
  queue<char> nome;
  string auxilio = "";
  int N;

  cin >> N;

  cin.ignore();

  while (N--) {
    getline(cin, palavras);

    for (int i = 0; i < palavras.size(); i++) {
      if (palavras[i] != ' ') {
        nome.push(palavras[i]);
      } else {
        while (!nome.empty()) {
          auxilio += nome.front();
          nome.pop();
        }
        contador[auxilio]++;
        auxilio = "";
      }
    }
  }

  map<string, int>::iterator it;
  int i = 0;
  priority_queue<pair<int, string>> ordem;
  for (it = contador.begin(); it != contador.end(); it++) {
    if (it->second > 1) {
      ordem.push({(it->second), (it->first)});
      i++;
    }
  }

  if (i == 0)
    cout << "ALL CLEAR";

  priority_queue<pair<int, string>> exposicao;
  while (!ordem.empty()) {
    cout << (ordem.top()).second << '\n';
    ordem.pop();
  }

  return 0;
}
