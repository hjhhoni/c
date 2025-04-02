#include <stdio.h>
int main(){
    //金币
    int n,s=0;
    int i=1;
    scanf("%d",&n);

    for(;n>0;i++){
        for(int j=1;j<=i;j++){
            s+=i;
        }
        n-=i;
    }
    if(n==0){
        printf("%d",s);
    }else if (n<0)
    {
        printf("%d",s+n*(i-1));
    }
}