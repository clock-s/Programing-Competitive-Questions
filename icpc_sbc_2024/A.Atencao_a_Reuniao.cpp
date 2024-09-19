#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int N;
  int tempo;

  cin >> N >> tempo;

  int espera = N - 1;

  int duracao = (tempo - espera)/N;

  cout << duracao << endl;



  
  return 0;
}
