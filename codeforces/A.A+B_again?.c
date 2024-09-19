#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;

  scanf(" %d", &n);

  while (n--) {
    int sum = 0;
    int number;

    scanf(" %d", &number);

    while (number) {
      sum += number % 10;
      number /= 10;
    }

    printf("%d\n", sum);
  }

  return 0;
}
