#include <stdio.h>
int n,p;
int main()
{
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        if(n%i==0)
        {
            printf("%d",n/i);
            return 0;
        }
}