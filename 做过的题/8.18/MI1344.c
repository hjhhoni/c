#include <stdio.h>
//将两个数之间能被17整除的数相加
int main(){
    int m,n,sum=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        if(i%17==0){
            sum+=i;
        }
    }
    printf("%d",sum);
}