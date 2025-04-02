#include <stdio.h>
int main(){
    int n;
    int jc(int x),sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=jc(i);
    }
    printf("%d",sum);
}

int jc(int x){
    if(x) return x*jc(x-1);//递归
    else return 1;
}