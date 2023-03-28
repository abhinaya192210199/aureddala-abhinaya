#include <stdio.h>

int main() {
  int decimal, remainder, binary = 0, place = 1;

  printf("Enter a decimal number: ");
  scanf("%d", &decimal);

  while (decimal > 0) {
    remainder = decimal % 2;
    binary += remainder * place;
    decimal /= 2;
    place *= 10;
  }

  printf("Binary number: %d\n", binary);

  return 0;
}
