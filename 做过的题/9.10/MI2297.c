#include <stdio.h>
int main(){
    // 数字统计（加强版）
    int M,N,a,c[10]={0};
    scanf("%d %d",&M,&N);
    for(int i=M;i<=N;i++){
        int K=i;
        while (K>=1)
        {
            a=K%10;
            for(int j=0;j<=9;j++){
                if (j==a)
                {
                    c[j]+=1;
                }
                
            }
            K=K/10;
        }
    }
    for(int i=0;i<=9;i++){
        printf("%d ",c[i]);
    }
}