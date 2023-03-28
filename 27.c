#include <stdio.h>

int romanToDecimal(char romanNumeral) {
  switch (romanNumeral) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    default:
      return 0;
  }
}

int main() {
  char romanNumeral;
  int decimalNum = 0, prevNum = 0, currentNum;

  printf("Enter a Roman numeral: ");
  scanf("%c", &romanNumeral);

  while (romanNumeral != '\n') {
    currentNum = romanToDecimal(romanNumeral);

    if (currentNum > prevNum) {
      decimalNum += currentNum - 2 * prevNum;
    } else {
      decimalNum += currentNum;
    }

    prevNum = currentNum;

    scanf("%c", &romanNumeral);
  }

  printf("Decimal number: %d\n", decimalNum);

  return 0;
}
