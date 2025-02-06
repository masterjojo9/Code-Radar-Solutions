#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    if(scanf("%c", &ch) != 1) {
        printf("Error in input.\n");
        return 1;
    }
    printf("Character entered: %c\n", ch);
    printf("ASCII Value: %d\n", ch);
    return 0;
}
