#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("Nth Fibonacci term is: 0");
        return 0;
    }
    if(n == 1) {
        printf("Nth Fibonacci term is: 1");
        return 0;
    }
    for(i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    printf("Nth Fibonacci term is: %d", b);

    return 0;
}