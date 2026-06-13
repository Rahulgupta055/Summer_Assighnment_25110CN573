#include <stdio.h>
int perfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(perfect(n))
        printf("Perfect");
    else
        printf("Not Perfect");
    return 0;
}