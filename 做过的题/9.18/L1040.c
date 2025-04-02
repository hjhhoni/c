#include <stdio.h>
int main(){
    //最大公约数和最小公倍数
    int a,b,max=0,min;
    scanf("%d %d",&a,&b);
    if(a==b){
        max=a;
        min=a;
    }else{
        //最大公约数
        for(int i=b;i>=1;i--){
            // printf("%d\n",i);
            if(b%i==0){
                for(int j=a;j>=1;j--){
                    if(a%j==0&&j==i&&max==0){
                        max=j;
                    }
                }
            }
        }
        //最小公倍数
        min=b/max*a;
    }

    printf("%d %d",max,min);
}