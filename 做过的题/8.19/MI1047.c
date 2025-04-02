#include <stdio.h>
//一个两位数个位十位换位相差k
int main(){
    int k,b,c,d;
    scanf("%d",&k);
    for(int i=10;i<100;i++){
        b = i%10*10; //个位
        c = i/10; //十位
        d = b+c;
        if(d-i==k){
            printf("%d\n",i);
        }
    }
}