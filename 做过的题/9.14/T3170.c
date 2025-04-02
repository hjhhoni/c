#include <stdio.h>
int main(){
    long long a,b,c,d,t;  //多出一个t用于中转站
    while (scanf("%lld %lld %lld %lld",&a,&b,&c,&d)!=EOF)
    {
        if (a>b)
        { t=a;a=b;b=t; }  //a,b交换，a小
        if (a>c)
        { t=a;a=c;c=t; }
        if (a>d)
        { t=a;a=d;d=t; }  //a与b,c,d交换一轮,此时a最小
        if (b>c)
        { t=b;b=c;c=t; }  //b与c交换
        if (b>d)
        { t=b;b=d;d=t; }  //此时b第二小
        if (c>d)
        { t=c;c=d;d=t; }  //此时c第三小,顺序排好了
        printf("%lld %lld %lld %lld\n",a,b,c,d);
    }
    
    return 0;
}