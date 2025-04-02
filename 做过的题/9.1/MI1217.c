#include <stdio.h>
//  分解质因数
int main()
{
    int n,i,a=0,b,d=1;
    int c[100];
    scanf("%d", &n);
 
    printf("%d=", n); // 输出原数
 
    for (i = 2; i <= n; i++) // 从2开始遍历到n
    {
        while (n % i == 0) // 如果n能被i整除,保证因数
        {
            c[a]=i;
            a++;
            //printf("%d", i); // 输出i
            n /= i; // 将n除以i
            //if (n != 1) // 如果n不等于1，说明还有质因数
                //printf("*"); // 输出乘号
        }
    }
    // for(int j=0;j<a;j++){
    //     printf("*%d",c[j]);
    // }
    if (a==1)
    {
        printf("%d",c[0]);
    }else{
        for(int j=0;j<=a;j++){
            if (j==0)
            {
                printf("%d",c[j]);
            }else if (j!=0&&j!=a)
            {
            if (c[j]==b)
            {
                    d++;
            }else if (c[j]!=b)
            {
                    if (d==1)
                    {
                        printf("*%d",c[j]);
                    }else if (d!=1)
                    {
                        printf("^%d*%d",d,c[j]);
                        d=1;
                    } 
            } 
            }else if (j==a)
            {
                if (d!=1)
                {
                    printf("^%d",d);
                }
            }
            
            b=c[j];
        }
    }
    return 0;
}