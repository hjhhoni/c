#include<iostream>
int a[1000006];
long long sum[1000006];
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[0]=0;
		sum[i]=sum[i-1]+a[i];
	}
	int l=0,r=1;//定义双指针
	int ans=0;
	while(r<=n) //当右指针不超过边界时循环操作
	{
		if(sum[r]-sum[l]<m)//如果该子段和小于m时
		{
			r++; //右指针右移
		}
		else if(sum[r]-sum[l]>m) //如果该子段和大于m时
		{
			l++; //左指针右移
		}
		else //否则即子段和等于m时
		{
			ans++; //选法数加一
			r++; //右指针右移
		}	
	}
	cout<<ans<<endl;
 } 