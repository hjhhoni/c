# include <stdio.h>
int akm(int n,int t)
{   
    if(n-1) return akm(n-1,(t+1)*2);
    else return t;
    
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",akm(n,1));
	return 0;
}