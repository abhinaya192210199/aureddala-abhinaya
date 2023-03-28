#include <stdio.h>
int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n", ch, ch);
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The ASCII values of characters in the string '%s' are:\n", str);
    for (int i = 0; str[i] != '\0'; i++)
        {
        printf("%c : %d\n", str[i], str[i]);
    }
}

