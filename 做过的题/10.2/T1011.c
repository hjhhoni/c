# include<stdio.h>
int main()
{
	int k,i;
	double Sn=0;
	scanf("%d",&k);
	for(i=1; ;i++)
	{
		Sn=Sn+1.0/i;
		if(Sn>k)
		{
			break;
		}
	}
	printf("%d",i);
	return 0;
	
}
