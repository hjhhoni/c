# include <stdio.h>
int akm(int n)
{   
    if(n) return n+akm(n-1);
    else return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",akm(n));
	return 0;
}