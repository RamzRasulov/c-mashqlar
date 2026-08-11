#include <stdio.h>

int main(void) {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a >= b && a >= c) {
    printf("katta son a=%d\n", a);
  } else if (b >= a && b >= c) {
    printf("katta son b=%d\n", b);
  } else {
    printf("katta son c=%d\n", c);
  }

  return 0;
}
