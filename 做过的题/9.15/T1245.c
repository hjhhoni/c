#include <stdio.h>
int main(){
    double a,b,c;
    double sum=0;
    scanf("%lf %lf %lf",&a,&b,&c);
    for(int i=1;i<=a;i++){
        sum+=i;
    }
    // printf("%.2f",sum);
    for(int i=1;i<=b;i++){
        sum+=(i*i);
    }
    for(int i=1;i<=c;i++){
        sum+=1.0/i;
    }
    printf("%.2f",sum);
}