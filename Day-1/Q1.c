#include <stdio.h>
int main() {
    int n,i, sum=0 ;
    printf("enter the value of N:");
    scanf("%d",&n);
    for (i = 0; i <= n; i++){
        sum+=i;
    }
    printf("The sum of first %d natural numbers : %d",n,sum);
    return 0;
}
