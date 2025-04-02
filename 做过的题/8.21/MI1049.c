#include <stdio.h>
int main(){
    //求平均值
    int a,c=0;
    float b=0;
    //连续输入
    while (scanf("%d",&a)>0&&a!=0)
    {
        b+=a;
        c+=1;
    }

    printf("%.1f",b/c); //保留一位小数
}