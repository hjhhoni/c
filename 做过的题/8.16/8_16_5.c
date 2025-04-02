#include <stdio.h>
//判断闰年
int main(){
    int a;
    scanf("%d",&a);
    if(a%400==0){
        printf("Y");
        
    }else if (a%4==0&&a%100!=0)
    {
        printf("Y");
    }else{
        printf("N");
    }
}