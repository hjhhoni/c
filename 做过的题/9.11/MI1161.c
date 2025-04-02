#include <stdio.h>
int main(){
    // 藤藤问西湖龙井
    int n=18,a,sum=0;
    while (scanf("%d",&a)&&n>1)
    {
        if (a>10)
        {
            sum+=10;
        }else{
            sum+=a;
        }
        n--;
    }
    if (a>10)
    {
        sum+=10;
    }else{
        sum+=a;
    }
    printf("%d",sum);
}