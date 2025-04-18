#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibonacciseries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid Input\n");
        return 0;
    }
    fibonacciseries(n);
    return 0;
} 