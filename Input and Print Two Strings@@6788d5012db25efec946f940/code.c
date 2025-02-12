#include <stdio.h>

int main() {
    char str1[50], str2[50];

    // Prompting user for input
    printf("Enter two strings: ");
    scanf("%s %s", str1, str2);

    // Printing the entered strings
    printf("You entered: %s and %s\n", str1, str2);

    return 0;
}
