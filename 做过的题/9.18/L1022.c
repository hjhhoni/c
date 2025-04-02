#include <stdio.h>
int main()
{
	int n;
	double sum = 0, t = 1,ts=1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
        if (i%2==0)
        {
            sum += ts / t;
            t += 2;
            ts+=1;
        }else{
            sum -= ts / t;
            t += 2;
            ts+=1;
        }
        
	}
		
	printf("%.3lf", sum);
	return 0;
}
