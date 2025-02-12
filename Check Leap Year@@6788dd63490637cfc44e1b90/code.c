#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Check if the year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Leap Year\n");
            } else {
                printf("Not a Leap Year\n");
            }
        } else {
            printf("Leap Year\n");
        }
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}
