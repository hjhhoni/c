#include <stdio.h>
int main()
{
	int n;
	double sum = 0, t = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
        if (i%2==0)
        {
            sum += 1.0 / t;
            t += 3;
        }else{
            sum -= 1.0 / t;
            t += 3;
        }
        
	}
		
	printf("sum = %.3lf", sum);
	return 0;
}
