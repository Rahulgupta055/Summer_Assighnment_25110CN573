#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int sum=0,temp=n,r,count=0;
    int t=n;
    while(t>0){
        count++;
        t=t/10;
    }
    while(n>0){
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(sum==temp)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}