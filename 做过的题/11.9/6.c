#include <stdio.h>

int main(){
    int a,b,c,d;
    long long k;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    long long sum=22;
    if (a<sum)
    {
        sum=a;
    }
    if (b<sum)
    {
        sum=b;
    }
    if (c<sum)
    {
        sum=c;
    }   
    if (d<sum)
    {
        sum=d;
    }     
    printf("%lld",sum);
}
