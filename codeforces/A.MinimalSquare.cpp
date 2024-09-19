#include <stdio.h>

int main (int argc, char *argv[]) {
  int N;

  scanf(" %d", &N);

  while(N--){
    int a, b;

    scanf(" %d %d", &a, &b);

    int L, min, max;

    if(a > b){
      min = b;
      max = a;
    }else{
      min = a;
      max = b;
    }

    (2* min >= max) ? L = 2*min : L = max;


    printf("%d\n", L*L);

  }


  return 0;
}
