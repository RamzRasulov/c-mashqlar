#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  if (a % 5 == 0) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  return 0;
}
