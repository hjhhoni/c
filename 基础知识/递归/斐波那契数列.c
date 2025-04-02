# include <stdio.h>
int akm(int n)
{   
    if(n==1) return 0;
    else if(n==2||n==3) return 1;
    else return akm(n-1)+akm(n-2);
    
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",akm(n));
	return 0;
}