#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int i;

  for (i = 0; i < 4; i++) {
    printf("Number: %d\n", myNumbers[i]);
    printf("Memory Addres: %p\n", &myNumbers[i]);
  }

  return 0;
}