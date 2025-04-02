#include <stdio.h>
#include <math.h>
//升序找有两个数相同的完全平方数
int main(){
    int a,b,c,d,n=0;
    scanf("%d",&a);
    for(int i=100;i<999;i++){
        b = i%10; //个位
        c = i/10%10; //十位
        d = i/100; //百位
        int is = sqrt(i);
        if(b==c||b==d||c==d){
            if(i==is*is){
                n+=1;
                if(n==a){
                    printf("%d",i);
                    return 0;
                }
            }else{
                n+=0;
            }
        }else{
            n+=0;
        }
    }
}