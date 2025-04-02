#include<bits/stdc++.h>
using namespace std;
bool isShushu(int a)
{
	bool flag=true;
	if(a>1)
	{
		for(int i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				flag=false;
				break;
			}
		}	
	}
	else
	{
		flag=false;
	}
		
	return flag;
}
 
int maxZhiYinZi(int x)
{
	if(isShushu(x))
	{
		return x;
	}
	else
	{
		for(int i=x;x>1;i--)
		{
			if(x%i==0&&isShushu(i))
			{
				return i;
			}
		}
	}
 } 
 
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		cout<<maxZhiYinZi(i);
		if(i!=n)
		{
			cout<<',';
		}
	}
	
	return 0;
}