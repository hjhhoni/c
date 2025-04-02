#include <stdio.h>
//  十进制转二进制数一
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while (n>0)
    {
        if (n%2==1) sum+=1; 
        n/=2;
    }
    printf("%d",sum);
}