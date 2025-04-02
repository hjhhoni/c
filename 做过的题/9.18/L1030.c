#include<stdio.h>
int main()
{
	int n, res;
    while (scanf( "%d", &n )!=EOF)
    {
        if( n < 0 ) res = -1;
        else if( n == 0 ) res = 0;
        else res = 1;
        
        printf( "sign(%d) = %d\n", n, res );
    }
	return 0;
}