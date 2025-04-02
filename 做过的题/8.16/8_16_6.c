#include <stdio.h>
//水仙花数
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b = a%10; //个位
    c = a/10%10; //十位
    d = a/100; //百位
    if(a==b*b*b+c*c*c+d*d*d){
        printf("TRUE");
    }else{
        printf("FALSE");
    }
}