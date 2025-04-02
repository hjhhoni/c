#include<stdio.h>
int main(){
    int a, b;
    char type;
    double price, discount;
    scanf("%d %d %c", &a, &b, &type);
    
    if(b==90) price = 6.95;
    else if(b==93) price = 7.44;
    else price = 7.93;
    
    if(type == 'm') discount = 0.05;
    else discount = 0.03;
    
    printf("%.2lf\n", (1 - discount) * price * a);
    return 0;
}