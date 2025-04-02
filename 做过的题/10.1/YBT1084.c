#include <stdio.h>
int main(){
    int a,b,c=1;
    a=a%1000;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        c*=a;
        c=c%1000;
    }
    printf("%03d",c%1000);
}