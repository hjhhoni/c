#include <stdio.h>
int main() {
    double p;
    int n;
    scanf("%d",&n);
    p=1.0/n;
    double sum=0;
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        sum+=a*p;
        sum%=998244353;
    }
    printf("%d",(int)sum%998244353);
}
