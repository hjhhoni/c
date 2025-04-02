#include <stdio.h>
// 水仙花数
int isshuxian(int n){
    int g = n%10;
    int s = (n/10)%10;
    int b = (n/100)%10;
    return g*g*g+s*s*s+b*b*b==n;
}

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int cnt=0;
    for(;m<=n;m++){
        if(isshuxian(m))cnt++;
    }
    printf("%d",cnt);
    return 0;
}