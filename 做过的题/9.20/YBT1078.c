#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    float p=1,q=2,t,sum=0;
    for(int i=1;i<=n;i++){
        sum+=q/p;
        t=q;
        q=q+p;
        p=t;
    }
    printf("%.4f",sum);
}