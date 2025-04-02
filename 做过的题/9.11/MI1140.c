#include <stdio.h>
int main(){
    // 藤藤学数列5
    int n;
    scanf("%d",&n);
    long long a=1,b=1,c;
    for(int i=1;i<=n;i++){
        if (i==1&&i==n)
        {
            printf("1");
        }else if (i==2&&i==n)
        {
            printf("1");
        }else if (i>2)
        {
            c=a+b;
            a=b;
            b=c;
            if (i==n&&i>2)
            {
                printf("%lld",c);
            }
            
        }
    }
}