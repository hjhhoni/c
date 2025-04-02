#include <stdio.h>
int main(){
    long long x, y;
    scanf("%lld",&x);
    if(x<1) y=x;
    else if(x>=10) y=3*x-11;
    else y=2*x-1;
    printf("%lld",y);
    return 0;
}