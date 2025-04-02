#include <stdio.h>
//矩阵乘法
int main() {
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    int A[n][m],B[m][k],c[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            int sum=0;
            for(int js=0;js<m;js++){
                sum+=A[i][js]*B[js][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }

}
