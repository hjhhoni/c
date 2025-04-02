#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long l=n+1,r=n+1;
    n=n*2+1;
    for(long long i=1;i<=n;i++){
        for(long long j=1;j<=n;j++){
            if (j==l||j==r)
            {
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
        if (i<=(n-1)/2)
        {
            l-=1;
            r+=1;
        }else{
            l+=1;
            r-=1;
        }
    }
}