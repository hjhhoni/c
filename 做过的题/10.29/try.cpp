#include<stdio.h>
#include<math.h>
int zs(int x){
	int t=1;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)
		{
			t=0;
			break;
		}
	}
	if(t==1){
		return(1);
	}
	else return(0);
}
int main() {
	int zs(int x);
	int n;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
	{
		int t=0;
		if(n%i==0)
		{
			t=(zs(i)==1)?1:0;
			if(t)
			{
				t=(zs(n/i)==1)?1:0;
				if(t)
				{
					printf("%d",n/i);
				}
			}
		}
	}
	return 0;
}