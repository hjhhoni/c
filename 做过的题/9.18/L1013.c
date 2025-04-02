#include <stdio.h>
#include <math.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if (a==10){
        b=1/a;
    }else
    {
        b=a;
    }
    
    printf("f(%0.1f) = %0.1f ",a,b);
}