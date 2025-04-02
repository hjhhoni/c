#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){int t=a;a=b;b=t;} //保证a为小
    for(int i=a;i>=1;i--){
        if(a%i==0&&b%i==0) {printf("%d",i);return 0;}
    }
}
 