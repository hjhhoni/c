#include <stdio.h>
//printf输入，scanf输出
// %d整数,%f浮点数,%s字符串,%c字符,%p指针
// int整数，float浮点数，double双精度浮点数，char字符，string字符串
// /n换行符

int main(){
    int a,b;
    scanf("%d %d",&a,&b);//输入两个整数a,b会赋值到%d对应的a，b
    printf("a=%d b=%d",a,b);
    return 0;

}

