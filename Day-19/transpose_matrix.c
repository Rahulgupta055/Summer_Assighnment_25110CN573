#include <stdio.h>
int main(){
    int i,m,n,j;
    printf("Enter rows of matrix :");
    scanf("%d",&m);
    printf("Enter columns of matrix :");
    scanf("%d",&n);
    int m1[m][n],m2[m][n],tr[n][m];
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        printf("Enter elements of matrix 1:");
        scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        tr[j][i]=m1[i][j];
        }        
    }
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
        printf("%d",tr[i][j]);
        }        
        printf("  \n");
    }
return 0;
}



