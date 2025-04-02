#include<stdio.h>

int main()

{

    int x,a,b,c;

    scanf("%d",&x);

    a = x%10;//个位数

    b = (x/10)%10;//十位数

    c = (x/100)%10;//百位数

    if(x == c*c*c + b*b*b + a*a*a)

    {

        printf("TRUE");

    }

    else

    {

        printf("FALSE");

    }

     return 0;

     

}
