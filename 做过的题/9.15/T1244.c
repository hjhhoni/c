#include <stdio.h>
int main(){
    int n;
    long long Sn=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        long long k=1;
        for(int j=1;j<=i;j++){
            k*=j;
        }
        Sn+=k;
    }
    printf("%lld",Sn);
}