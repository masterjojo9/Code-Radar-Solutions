#include <stdio.h>

int main() {
    unsigned int num;
    const unsigned int MSB = 1 << 31;
    scanf("%u", &num);

    // Checking MSB
    if (num & MSB) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
