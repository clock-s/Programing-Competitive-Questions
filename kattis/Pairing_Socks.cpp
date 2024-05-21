#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> pilha;
  stack<int> auxilio;
  int N;

  cin >> N;

  int socks;
  for (int i = 0; i < (2 * N); i++) {
    cin >> socks;
    pilha.push(socks);
  }

  int contador = 0;
  while (!pilha.empty()) {

    if (!auxilio.empty() && pilha.top() == auxilio.top()) {
      auxilio.pop();
    } else {
      auxilio.push(pilha.top());
    }
    contador++;
    pilha.pop();
  }

  if (!auxilio.empty())
    cout << "impossible";
  else
    cout << contador;

  return 0;
}
