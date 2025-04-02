#include<stdio.h>
int main()
{
    int n,s=1;
    scanf("%d",&n);
    int a[n][n],x=0,y=n-1;//起始坐标右上角
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            a[x++][y++]=s;//斜右下赋值
            s++;
        }
        x=0;y=n-1-(i+1);//重置起始位置
    }
    //这个循环完成了斜右下对角线以上的赋值
    x=1;y=0;//重置起始位置
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            a[x++][y++]=s;
            s++;
        }
        x=n-i+1,y=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
    return 0;
}