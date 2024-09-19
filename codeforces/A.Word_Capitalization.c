#include <stdio.h>

int main(int argc, char *argv[]) {
  char word[1000];
  char c;
  int count = 0;
  while ((c = getchar()) != '\n') {
    word[count++] = c;
  }
  word[count] = '\0';

  if (word[0] >= 97) {
    word[0] -= 32;
  }

  printf("%s", word);

  return 0;
}
