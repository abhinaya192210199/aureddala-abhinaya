#include <stdio.h>

unsigned long long factorial(int n);

int main() {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: Factorial of negative number is undefined\n");
  } else {
    printf("Factorial of %d = %llu\n", n, factorial(n));
  }

  return 0;
}

unsigned long long factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
