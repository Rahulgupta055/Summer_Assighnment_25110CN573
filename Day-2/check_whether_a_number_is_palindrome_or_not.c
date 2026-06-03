#include <stdio.h>
int main() {
    int n,rev=0,ld,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        ld= n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev==temp){
        printf("PALINDROME NUMBER");
    }
    else{
        printf("NOT A PALINDROME NUMBER");
    }
    return 0;
}
