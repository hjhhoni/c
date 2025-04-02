#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&b);
	int max = 0;
	for ( a=1 ; a<=b ; a++){
		int n;
		int m = 1;
		for ( n=1 ; n<=a ; n++){
				m *= n;
			}	
		max += m;
	}
	printf("%d",max);
	return 0;
 } 
