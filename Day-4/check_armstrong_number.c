#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0,result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        n = n / 10;
        digits++;
    }
    n = original;
    while (n != 0) {
        remainder = n % 10;
        result += pow(remainder, digits);
        n = n / 10;
    }
    if (result == original){
        printf("Armstrong Number");}
    else
        printf("Not an Armstrong Number");
    return 0;
}