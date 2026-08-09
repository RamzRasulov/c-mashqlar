#include <stdio.h>

int main(void) {
  int a;

  printf("Son kiriting: ");
  scanf("%d", &a);

  if (a % 2 == 0) {
    printf("juft\n");
  } else {
    printf("toq\n");
  }

  return 0;
}
