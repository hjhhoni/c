#include <stdio.h>
int main(){
    double n,a,sum=0;
    scanf("%lf",&n);
    for(double i=1;i<=n;i++){
        scanf("%lf",&a);
        sum+=a;
    }
    printf("%.0lf ",sum);
    printf("%.5lf ",sum/n);
}