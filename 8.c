#include <stdio.h>
void printNaturalNumbers(int n);
int main()
 {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d natural numbers are:\n", n);
    printNaturalNumbers(n);

}

void printNaturalNumbers(int n) {
    if (n == 0) {
        return;
    }
    printNaturalNumbers(n - 1);
    printf("%d ", n);
}

