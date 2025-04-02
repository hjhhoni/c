#include <stdio.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if (a==0){
        b=0;
    }else
    {
        b=1/a;
    }
    
    printf("f(%0.1f) = %0.1f ",a,b);
}