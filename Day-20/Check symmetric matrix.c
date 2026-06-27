#include <stdio.h>
int main(){
    int n,i,j,temp=1;
    printf("Enter order of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                temp=0;
                break;
            }
        }
    }
    if(temp==1)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("Not Symmetric Matrix");
    }
    return 0;
}