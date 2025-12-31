#include "example.h"
#include <stdio.h>

int main() {
  printf("Hello, World!\n");
  example_hello();
  for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
  }
  return 0;
}