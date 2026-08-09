#include <stdio.h>

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  int max_son;

  if (a > b) {
    max_son = a;
  } else {
    max_son = b;
  }

  if (c > max_son) {
    max_son = c;
  }

  printf("%d\n", max_son);

  return 0;
}
