#include <stdio.h>
#include <math.h>
int main() {
int start, end, num, original, remainder, digits, result;
printf("Enter start and end of range: ");
scanf("%d %d", &start, &end);
for(num = start; num <= end; num++) {
    original = num;
    digits = 0;
    result = 0;
    int temp = num;
    while(temp != 0) {
        temp = temp / 10;
        digits++;
    }
    temp = num;
    while(temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp = temp / 10;
    }
    if(result == original) {
        printf("%d ", original);
    }
}
return 0;
}
