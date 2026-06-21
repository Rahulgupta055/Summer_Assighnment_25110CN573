#include <stdio.h>
int main(){
    int i,m,n,j;
    printf("Enter rows of matrix :");
    scanf("%d",&m);
    printf("Enter columns of matrix :");
    scanf("%d",&n);
    int m1[m][n],m2[m][n],sum[m][n];
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        printf("Enter elements of matrix 1:");
        scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        printf("Enter elements of matrix 2:");
        scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        sum[i][j]=m1[i][j]+m2[i][j];
        }        
    }
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        printf("%d",sum[i][j]);
        }        
        printf("\n");
    }
return 0;

}
