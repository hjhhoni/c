#include <stdio.h>
double def(double x,double n){
    if(n>1) return x/(n+def(x,n-1));
    else if(n==1) return x/(1+x);
}
int main() {
    double x,n;
    scanf("%lf %lf",&x,&n);
    printf("%.2lf",def(x,n));
}