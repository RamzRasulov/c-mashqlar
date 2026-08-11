#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);

  if (a > 0) {
    printf("musbat\n");
  } else if (a < 0) {
    printf("manfiy\n");
  } else {
    printf("0\n");
  }

  return 0;
}
