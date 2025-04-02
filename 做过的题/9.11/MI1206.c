#include <stdio.h>
int main(){
    // 最大的素因子
    int n,max=0,a;
    scanf("%d",&n);
    
    // printf("%d",max);
    int c[n][1],b[n];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a);
        b[j]=a;
        // 最大素因子
        for (int i = 2; i <= a; i++) // 从2开始遍历到n
        {
            while (a % i == 0) // 如果n能被i整除,保证因数
            {
                if (i>max)
                {
                    if (i>max)
                    {
                        max=i;
                    }
                    c[j][1]=i;
                }
                a /= i; 
            }
        }
    }
    for(int i=0;i<n;i++){
        if (c[i][1]==max)
        {
            printf("%d",b[i]);
        }  
    }
}