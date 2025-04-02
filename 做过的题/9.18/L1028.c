#include<stdio.h>
 
int main()
{
    double fact(int n);
    int m,n;
    scanf("%d %d",&m,&n);
    printf("result = %.0f",fact(n)/(fact(m)*fact((n-m))) );
}
 
double fact(int n)//阶乘
{
    if(n) return n*fact(n-1);//递归
    else return 1;
}