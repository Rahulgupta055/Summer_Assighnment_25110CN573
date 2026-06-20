#include <stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter no. of elements in first array ");
    scanf("%d",&n1);
    int a[n1];
    for(i=0;i<n1;i++)
    {
        printf("Enter Elements of first Array:");
        scanf("%d",&a[i]);
    }
    printf("Enter no. of elements in second array");
    scanf("%d",&n2);
    int b[n2],c[n1+n2];
    for(i=0;i<n2;i++)
    {
        printf("Enter Elements of second Array:");
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
}