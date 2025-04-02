#include <stdio.h>
int main(){
    double sum=0,n,a;
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&a);
        sum+=a;
    }
    printf("%.4lf",sum/n);
}