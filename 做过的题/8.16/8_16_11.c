#include <stdio.h>
//奇数求和
int main(){
    int a,b,c,sum;
    scanf("%d %d",&a,&c);
    sum = 0;
    for(b=a;b<=c;b++){
        if(b%2!=0){
            sum+=b;
        }else{
            sum = sum+0;
        }
        
    }
    printf("%d",sum);


    return 0;
}