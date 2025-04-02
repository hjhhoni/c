#include <stdio.h>
int main(){
    // C程序设计(第五版) -【课后习题 1.6】
    double a,b,c,max;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a>max)
    {
        max=a;
    }
    if (b>max)
    {
        max=b;
    }
    if (c>max)
    {
        max=c;
    }
    printf("%g",max);

}