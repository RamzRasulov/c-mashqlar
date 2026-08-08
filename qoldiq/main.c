#include <stdio.h>

int main(void) {
  int a, b;

  printf("Son kiriting: ");
  scanf("%d", &a);

  b = a % 3;

  printf("%d\n", b);

  return 0;
}
