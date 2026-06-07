#include <stdio.h>
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n) + fib(n-1);
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",fib(x));
    return 0;
}