#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf( "%d", &n );
	int sum = 0, i = 0;
	for( i = 1; i <= n; i++ )
		sum+= pow( 2, i );
		
	printf("result = %d\n", sum );
	
	return 0; 
}