#include<stdio.h>
#include<string.h>
//高精度减法
//判断大小
int compare(char *a,char *b,int p,int q)
{
    if(p>q)
    {
        return 1;
    }
    else if(p<q)
    {
        return 0;
    }
    else
    {
        for(int i=0;i<p;i++)
        {
            if(a[i]>b[i])
            {
                return 1;
            }
            else if(a[i]<b[i])
            {
                return 0;
            }
            else
            {
                continue;
            }
        }
    }
}
int main (void)
{
 
    char num1[1500],num2[1500];
    scanf("%s",&num1);
    scanf("%s",&num2);
    int a[2000];
    int b[2000];
    int c[2000];
    int str1=strlen(num1);
    int str2=strlen(num2);
 //判断大小
    int m=compare(num1,num2,str1,str2);
 //如果小，换位，用大数减小数
    if(m==0)
    {
        //中转站，调换位置
        char t[1500];
        strcpy(t,num1);
        strcpy(num1,num2);
        strcpy(num2,t);
    }
    int i;
    str1=strlen(num1);
    str2=strlen(num2);
 //将字符型数据转换为整形数据
    for(i=0;i<str1;i++)
    {
        a[str1-i]=num1[i]-'0';
    }
    for(i=0;i<str2;i++)
    {
        b[str2-i]=num2[i]-'0';
    }
 //核心代码
    for(i=1;i<=str1;i++)
    {
 //如果减不过借一位
        if(a[i]<b[i])
        {
            a[i+1]--;
            a[i]=a[i]+10;
        }
        c[i]=a[i]-b[i];    
    }
 //前面经过判断这个已经换成小数了 
    int str3=str1;
 //把数前面所有的零删掉
    while(c[str3]==0&&str3>1)
    {
        str3--;
    }
 //如果是负数，输出负号
    if(m==0)
    {
        printf("-");
    }
 //输出，倒着输出不要忘记了
    for(i=str3;i>0;i--)
    {
        printf("%d",c[i]);
    }
    return 0;
}