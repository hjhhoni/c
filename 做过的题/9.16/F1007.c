#include<stdio.h>
#include<string.h>//我们用的strlen源自于这个头文件
int main()
{
    //原理是把每个位上的数字存入数组，进行个位相加然后输出
	char m[500],n[500];
	int a[500]={0},b[500]={0},c[501]={0};
	int i,j;
	int la,lb,lmax;
	scanf("%s",&m);
	scanf("%s",&n);
	la=strlen(m);
	lb=strlen(n);
	if(la>lb)
	{
		lmax=la;
	}
	else
	{
		lmax=lb;
	}
	for(i=0;i<la;i++)
	{
		a[la-1-i]=m[i]-'0';
	}
	for(i=0;i<lb;i++)
	{
		b[lb-i-1]=n[i]-'0';
	}
	for(i=0;i<lmax;i++)
	{
		c[i]+=a[i]+b[i];
		if(c[i]>=10)
		{
			c[i+1]+=c[i]/10;
			c[i]=c[i]%10;
		}
	}
	if(c[lmax]>0)
	{
		lmax++;
	}
	for(i=lmax-1;i>=0;i--)
	{
		printf("%d",c[i]);
	}
}