#include <stdio.h>
//奇数求和
int main(){
    int a,b,c;
    scanf("%d %d",&a,&c);
    //为啥要两个long?范围?
    long long sum = 1;
    for(b=1;b<=c;b++){  
        sum*=a;
    }
    printf("%lld",sum);


    return 0;
}