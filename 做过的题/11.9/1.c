#include <stdio.h>

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    long long wei=1;
    
    while (q--)
    {
        long long k;
        scanf("%lld",&k);
        wei=wei+k;
        if (wei>n)
        {
            wei%=n;
        }
        
    }
    if (n==1)
    {
        printf("1");
        return 0;
    }    
    printf("%lld",wei);
    return 0;
}