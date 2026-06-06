#include <stdio.h>
int main(){
    int x, n, power = 1, i;
    printf("Enter x and n:");
    scanf("%d%d",&x,&n);
    for(i = 1; i <= n; i++){
        power = power * x;
    }
    printf("power:%d",power);
    return 0;
}