#include <stdio.h>
int main() {
    int n,ld,product=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        ld= n%10;
        product= product*ld;
        n=n/10;
    }
    printf("Product of digits : %d",product);
    return 0;
}