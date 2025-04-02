#include <stdio.h>
int main(){
    int n;
    double jc(double x);
    double e=1;
    scanf("%d",&n);
    for(double i=1;i<=n;i++){
        e+=1.0/jc(i);
    }
    printf("%.10lf",e);
}

double jc(double x){
    if(x) return x*jc(x-1);//递归
    else return 1;
}