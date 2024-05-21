#include <iostream>
#include <stack>

using namespace std;

struct count {
  int gold = 0;
  int money = 0;
  int jewel = 0;
};

bool bag(stack<int> &, int);

int main() {
  stack<int> items;
  string run;
  count contador;
  bool pass = 1;
  // money p 0
  // gold g 1
  // jewels o 2

  cin >> run;

  for (int i = 0; i < run.size(); i++) {
    if (run[i] == 'p')
      items.push(0);
    else if (run[i] == 'g')
      items.push(1);
    else if (run[i] == 'o')
      items.push(2);
    else if (run[i] == 'P')
      pass = bag(items, 0);
    else if (run[i] == 'G')
      pass = bag(items, 1);
    else if (run[i] == 'O')
      pass = bag(items, 2);

    if (pass == 0) {
      break;
    }
  }

  while (!items.empty()) {
    if (items.top() == 0)
      contador.money++;
    else if (items.top() == 1)
      contador.gold++;
    else if (items.top() == 2)
      contador.jewel++;

    items.pop();
  }

  if (contador.money == contador.jewel && contador.money == contador.gold &&
      contador.money == 0)
    cout << "Neibb";

  else {
    cout << contador.money << '\n';
    cout << contador.gold << '\n';
    cout << contador.jewel;
  }

  return 0;
}

bool bag(stack<int> &bag, int want) {
  if (!bag.empty()) {

    while (!bag.empty()) {
      if (bag.top() == want) {
        bag.pop();
        return 1;
      }

      bag.pop();
    }
  }

  return 0;
}
