#include <stdio.h>
int main(){
    double M,N,S=0;
    scanf("%lf %lf",&M,&N);
    double a=2;
    for(double i=1;i<=N;i++){
        if (i==1)
        {
            S+=M;
            M/=a;
        }else{
            S+=a*M;
            M/=a;
        }
    }
    printf("%.2lf %.2lf",M,S);
}