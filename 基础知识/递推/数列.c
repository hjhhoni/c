#include <stdio.h>
//递推的题目可以ti递推的题目可以提取出递推式
long long f[1005];
int k,n;
int main()
{

	scanf("%d%d",&k,&n);
	for(int i=1;i<=n;i++) f[i]=f[((i-(i%2))/2)]*k+(i%2);
	printf("%lld",f[n]);

	return 0;
}
