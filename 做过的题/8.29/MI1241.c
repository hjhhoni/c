#include <stdio.h>
int main(){
    // 特殊矩阵3-斜行矩阵
    int n;
    scanf("%d",&n);
    int c[n][n],k=1,m=1,ks=1;
    for(int i=1;i<=n*2-1;i++){  //循环9次，代表9此斜行

        if (i>=n)
        {
            int v=1;
            for(int j=ks;j<=k;j++){  //循环k次5,4,3,2,1
                c[j-1][n-v]=m;
                m++;
                v++;
            }
            ks++;
        }else{
            for(int j=1;j<=k;j++){  //循环k次1,2,3,4
                c[j-1][k-j]=m;
                m++;
            }
            k++;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int is=0;is<n;is++){
            //写下四位场宽的数
            for(int j=1000;j>=1;j/=10){
                if (c[i][n-is-1]>=j)
                {
                    printf("%d",c[i][n-is-1]);  //反转
                    break;
                }else{
                    printf(" ");
                }
            }            
        }
        printf("\n");
    }
}
