#include <stdio.h>
int main(){
    double r,h,pi=3.1415926;
    scanf("%lf,%lf",&r,&h);
    printf("圆周长: l=%0.2f\n",pi*r*2);
    printf("圆面积: s=%0.2f\n",pi*r*r);
    printf("圆球表面积: sq=%0.2f\n",4*pi*r*r);
    printf("圆球体积: vq=%0.2f\n",(double)(4.0/3.0)*pi*r*r*r);
    printf("圆柱体积: vz=%0.2f\n",pi*r*r*h);
}