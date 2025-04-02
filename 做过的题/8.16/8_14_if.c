#include <stdio.h>
#include <stdlib.h> //窗口停留函数的头文件
int main()
{
    int a;
    scanf("%d",&a); //&是赋值符号%d是数据类型整形
    if(a%2==0){
        printf("a is %d,是偶数\n",a);

    }else{

        printf("a is %d,是奇数\n",a);
    }

    system("pause"); //窗口停留函数
    return 0;
}