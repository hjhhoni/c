#include<stdio.h>
#include<string.h>
// 时间复杂度为O(len*2)
char c[100010];
int a[100010];
int main()
{
	scanf("%s", c);
	int len = strlen(c);
	for (int i = 0; i < len; i++)
	{
		a[c[i]]++;   //用c的字符对应的值作为a的下标标记字符出现次数
	}
	for (int i = 0; i < len; i++)
	{
		if (a[c[i]] == 1)
		{
			printf("%c", c[i]);
			return 0;
		}
	}
	printf("no");
	return 0;
}