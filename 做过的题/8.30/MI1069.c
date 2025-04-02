#include <stdio.h>
int main(){
    // 逆序输出
    int n,a,b;
    scanf("%d",&n);
    b=n;
    int c[n+1];
    do
    {
        n--;
        c[n+1]=a;
    } while (scanf("%d",&a)&&n>0);
    c[n]=a;
    for(int i=0;i<b;i++){
        printf("%d ",c[i]);
    }
    
}