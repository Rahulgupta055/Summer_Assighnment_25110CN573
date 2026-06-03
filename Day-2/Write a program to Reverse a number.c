#include <stdio.h>
int main() {
    int n,rev=0,ld;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0){
        ld= n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    printf("Reversed number : %d",rev);
    return 0;
}
