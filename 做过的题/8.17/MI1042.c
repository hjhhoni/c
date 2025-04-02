#include <stdio.h>
#include <math.h>
//整数的约数和,当题做不出来时，不妨看看数据的范围
int main(){
    int b,x;
    long long d=0;

    scanf("%d",&b);
    x = sqrt(b);
    for(int i=1;i<=x;i++){
        if(b%i==0){
            int w;
            w = b/i;
            if(w==i){
                d+=i;
            }else{
                d+=i;
                d+=b/i;
            }
        }
    }
    printf("%lld",d);
}