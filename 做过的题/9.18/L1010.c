#include <stdio.h>
#include <math.h>
int main(){
    float i,m,r,y;
    scanf("%f %f %f",&m,&y,&r);
    i=m*pow(1+r,y)-m;
    printf("interest = %0.2f",i);
}