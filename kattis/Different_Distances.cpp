#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double x1, y1, x2, y2, p;
  while (true) {
    cin >> x1;
    if (x1 == 0)
      break;
    cin >> y1 >> x2 >> y2;

    double x, y;
    x = x1 - x2;
    y = y1 - y2;

    double distance, chute;

    distance = (pow(x, p) + pow(y, p));

    cout << distance;

    distance = (pow(distance, 1 / p));

    cout << distance << '\n';
  }

  return 0;
}
