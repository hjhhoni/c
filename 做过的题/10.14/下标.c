#include <stdio.h>

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
    long long c[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&c[i]);
    }
    for(int i=1;i<=q;i++){
        long long a;
        scanf("%lld",&a);
        if(a>=n) a%=n;
        else if(a<0){
            int k=-a;
            if(k%n==0)a=0;
            else a=n-k%n;
        }
        printf("%lld\n",c[a]);
    }
}
