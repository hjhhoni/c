#include<stdio.h>
#include <math.h>
int main()
{
	float p, r, n;
	r = 0.07;
	n = 10;
	p = pow(1 + r, n);
	printf("p=%lf\n", p);
	printf("p=1.967151");
	return 0;
}
