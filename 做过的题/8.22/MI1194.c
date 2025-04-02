#include <stdio.h>
int main(){
    //阶乘和[简单-非高精度]
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            a*=j;
        }
        s+=a;
    }
    printf("%d",s);
}