#include <stdio.h>

int main() {
    int num;

    // Prompting user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Printing in Hexadecimal and Octal
    printf("Hexadecimal: %X\n", num);
    printf("Octal: %o\n", num);

    return 0;
}
