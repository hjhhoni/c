#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100][100] = { 0 };
	scanf("%d", &n);//输入需要填充的数组的大小，arr[n][n]
	//填充数组
	int i = 0;
	int num = 1;
	for (i = 0; i < n / 2; i++)//循环的次数
	{
		int x = i;
		int y = n - 1 - i;
		for (x = i; x <= n - 2 - i; x++)//第一步，列不变，行依次++
		{
			arr[x][y] = num;
			num++;
		}
		for (y = n - 1 - i; y >= i + 1; y--)//第二步，行不变，列依次--
		{
			arr[x][y] = num;
			num++;
		}
		for (x = n - 1 - i; x >= i + 1; x--)//第三步，列不变，行依次--
		{
			arr[x][y] = num;
			num++;
		}
		for (y = i; y <= n - 2 - i; y++)//第四步，行不变，列依次++
		{
			arr[x][y] = num;
			num++;
		}
	}
	if (n % 2 != 0)//判断n是否为奇数
		arr[n / 2][n / 2] = num;//填充正中央的数
	//打印数组
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
