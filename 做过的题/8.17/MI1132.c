#include <stdio.h>
//1到n所有偶数的和
int main(){
    int b,d=0;
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        if(i%2==0){
            d+=i;
        }else{
            d+=0;
        }
    }
    printf("%d",d);
}