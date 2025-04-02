#include <stdio.h>
int so7(int x){
    if(x){
        if(x%10==7) return 1;
        else return so7(x/10);
    }
    return 0;
}
int main() {
    int n,sum=0;
    scanf("%d",&n);
    if(n<7) {printf("0");return 0;}
    for(int i=7;i<=n;i++){
        if(so7(i)||i%7==0) sum++;
    }
    printf("%d",sum);
}
