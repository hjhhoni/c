#include<stdio.h>
int main()
{
	int n,m,sum;
	scanf("%d %d",&n,&m);
	float c;
	int arr1[n][m],arr2[n][m];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr2[i][j]=arr1[i][j];
		}
	}
    //直接从1开始避免了边框计算
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<m-1;j++)
		{
			sum=arr1[i][j-1]+arr1[i][j+1]+arr1[i-1][j]+arr1[i+1][j]+arr1[i][j];
			c=sum/5.0;
			if(c-sum/5>=0.5)//注意题目要求数舍入到最接近的一个数，这是一个细节点
			{
				arr2[i][j]=sum/5+1;
			}
			else
			arr2[i][j]=sum/5;
		}
	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
}