#include <stdio.h>
int main() {
    int M,N,P;
    printf("enter rows and col of matrix A(MN):");
    scanf("%d %d",&M,&N);
    printf("enter rows and col of matrix B(P):");
    scanf("%d",&P);
    int A[M][N],B[N][P],C[M][P];
     printf("enter the elements of Mat A:");
     for (int i=0; i<M;i++) {
         for (int j = 0; j<N; j++) {
             scanf("%d",& A[i][j]);}
    } 
    printf("enter the elements of Mat B:");
     for (int i=0; i<N;i++) {
         for (int j = 0; j<P; j++) {
             scanf("%d",& B[i][j]);}
    }
    for (int i=0; i<M;i++) {
         for (int j = 0; j<P; j++) {
             C[i][j]= 0; }
    }
    for (int i=0; i<N;i++) {
         for (int j = 0; j<P; j++) {
             for (int k=0; k<N;k++){
             C[i][j]+=A[i][k]*B[k][j];}
         }     
    }
     printf("resultant matrix C:");
     for (int i=0; i<M;i++) {
         for (int j = 0; j<P; j++) {
             printf("%d", C[i][j]);}
        printf("\n");
    }
    return 0;
}