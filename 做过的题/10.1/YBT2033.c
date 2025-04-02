#include <stdio.h>
long long jc(long long n)//阶乘
{
    if(n) return n*jc(n-1)%1000000;//递归,递归的函数要加在return后面
    else return 1;
}
int main(){
    long long n;
    long long sum=0;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        sum+=jc(i);
    }
    printf("%lld",sum%1000000);
}