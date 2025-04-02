#include <stdio.h>
int main(){
    // 不与最大数相同的数字之和
    int n,a,max=0,sum=0;
    scanf("%d",&n);
    while (scanf("%d",&a)&&n>1)
    {
        if (a>max)
        {
            max=a;
            sum+=a;
        }else if (a<max)
        {
            sum+=a;
        }
        
        n--;
    }
    if (a>max)
    {
        max=a;
        sum+=a;
    }else if (a<max)
    {
        sum+=a;
    }
    
    
    printf("%d",sum-max);
}