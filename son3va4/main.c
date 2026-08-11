#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  if (a % 3 == 0 && a % 4 == 0) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  return 0;
}
