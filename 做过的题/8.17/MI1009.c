#include <stdio.h>
//循环练习
int main(){
    int b,c,d=0;

    scanf("%d",&b);
    for(int i=0;i<=b-1;i++){
        scanf("%d",&c);
        d+=c;
    }
    printf("%d",d);
}