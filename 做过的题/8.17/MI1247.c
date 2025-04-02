#include <stdio.h>
//药房管理
int main(){
    int a,b,c,d=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0;i<=b-1;i++){
        scanf("%d",&c);
        if(a>=c){
            a-=c;
        }else{
            d+=1;
        }
    }
    printf("%d",d);
}