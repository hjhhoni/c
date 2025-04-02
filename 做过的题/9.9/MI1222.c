#include <stdio.h>
int main(){
    // 统计天数
    int n,a=1,b,c,d=1,m=0;
    scanf("%d",&n);
    while (scanf("%d",&b)&&a<n)
    {
        if (a==1)
        {
            c=b;
        }else{
            if (b>c)
            {
                d++;
                c=b;
            }
            else
            {
                if (d>m)
                {
                    m=d;
                }
                c=b;
                d=1;
            }
            
        }
        a++;
    }
    // 处理多出来的一个
    if (b>c)
    {
        d++;
        c=b;
    }
    if (d>m)
    {
        m=d;
    }
    printf("%d",m);
}