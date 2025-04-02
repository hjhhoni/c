#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if (a>=0){
        b=sqrt(a);
    }else
    {
        b=(a+1)*(a+1)+a*2+1/a;
    }
    
    printf("f(%0.2f) = %0.2f ",a,b);
}