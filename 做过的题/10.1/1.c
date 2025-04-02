#include<stdio.h>
int main()
{
    int n;
    long long x,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&x);
        while (x>0&&x%2==0)
        {
            x/=2;
        }
        sum+=x;
    }
    printf("%lld",sum);
    
}