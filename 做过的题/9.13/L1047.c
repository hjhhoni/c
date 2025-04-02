#include <stdio.h>
#include <math.h>
int main(){
    double r1 = 0.03, P1, m;  //利息,本息和,本金
    scanf("%lf",&m);
    int n1 = 5; //存款年数
    P1 = (1 + n1 * r1);
    P1*=m;
    printf("p1=%.6f\n", P1);
    //先存两年
    double r2 = 0.021, P2;  //利息,本息和,本金
    int n2 = 2; //存款年数
    P2 = m * (1 + n2 * r2);
    //再存三年
    r2 = 0.0275;
    n2 = 3;
    P2 *= 1 + n2 * r2;
    printf("p2=%.6f\n", P2);
    //先存三年
    double r3 = 0.0275, P3;  //利息,本息和,本金
    int n3 = 3; //存款年数
    P3 = m * (1 + n3 * r3);
    //再存两年
    r3 = 0.021;
    n3 = 2;
    P3 *= 1 + n3 * r3;
    printf("p3=%.6f\n", P3);
    double r4 = 0.015, P4 = m;  //利息,本息和,本金
    int n4 = 1; //存款年数
    for(int i = 0; i < 5; i++) P4 *= 1 + n4 * r4;
    printf("p4=%.6f\n", P4);
    double r5 = 0.0035, P5;  //利息,本息和,本金
    int n5 = 5; //存款年数
    P5 =pow((1 + r5/4), 4*n5);
    P5*=m;
    printf("p5=%.6f", P5);
    return 0;
}