#include <stdio.h>

int checker(int a, int b) {
  if (a > b)
    return 1;
  if (a == b)
    return 0;
  if (a < b)
    return -1;
}

int main() {
  int n;

  scanf(" %d", &n);

  while (n--) {
    int a, b, c, d;
    int cont = 0;

    scanf(" %d %d %d %d", &a, &b, &c, &d);

    if ((checker(a, c) + checker(b, d)) > 0)
      cont++;

    if ((checker(a, d) + checker(b, c)) > 0)
      cont++;

    if ((checker(b, c) + checker(a, d)) > 0)
      cont++;

    if ((checker(b, d) + checker(a, c)) > 0)
      cont++;

    printf("%d\n", cont);
    cont = 0;
  }

  return 0;
}
