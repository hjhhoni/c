#include <stdio.h>
int main()
{
	int i,n,x[10005],y[10005],a[10005],b[10005],x1,y1,k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d%d",&x[i],&y[i],&a[i],&b[i]);
	scanf("%d%d",&x1,&y1);
	for(i=n-1;i>=0;i--)    //逆序输出
	{
	    if((x1>=x[i]&&x1<=x[i]+a[i])&&(y1>=y[i]&&y1<=y[i]+b[i]))
		{    printf("%d\n",i+1); k*=0;}
		else continue;
		if((x1>=x[i]&&x1<=x[i]+a[i])&&(y1>=y[i]&&y1<=y[i]+b[i]))
	        break;     //输出最大的跳出循环
	}
	if(k==1) printf("-1\n");
    return 0;
}
