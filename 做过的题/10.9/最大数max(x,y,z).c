#include <stdio.h>
#define MAX(x,y) (x>y?x:y)
int main() {
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    printf("%.3lf",(double)MAX(a,MAX(b,c))/(MAX(a+b,MAX(b,c))*MAX(a,MAX(b,b+c))));
    return 0;
}