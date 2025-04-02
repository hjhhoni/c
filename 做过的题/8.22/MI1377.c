#include <stdio.h>
int main(){
    //分离整数的各个数位
    int a;
    int i=0;
    scanf("%d",&a);
    while (a>=1)
    {
        i=a%10;
        printf("%d ",i);
        a=a/10;
    }
    
}