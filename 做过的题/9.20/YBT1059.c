#include <stdio.h>
int main(){
    int n;
    float sum=0,a;
    scanf("%d",&n);
    for(double i=1;i<=n;i++){
        scanf("%f",&a);
        sum+=a;
    }
    printf("%.2f",sum/n);
}