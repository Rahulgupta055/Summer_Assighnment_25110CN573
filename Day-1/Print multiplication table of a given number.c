#include <stdio.h>
int main(){
    int n,i, mult ;
    printf("Enter the given number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=n*i;
        printf("%d X %d = %d \n",n,i,mult);
    }
    return 0;
}