#include <stdio.h>
//创建函数
int main(){
    int a,b,c,sums;
    scanf("%d %d %d",&a,&b,&c);
    sums = sum(a,b,c);
    printf("%d",sums);
}

int sum(int x,int y,int z){
    int w;
    w = x+y+z;
    return w;
}