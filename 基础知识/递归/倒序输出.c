# include <stdio.h>
int akm(int n)
{   
    if(n>=10) {printf("%d",n%10);return akm(n/10);}
    else return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",akm(n));
	return 0;
}