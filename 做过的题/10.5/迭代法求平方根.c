#include <stdio.h>
#include <math.h>
 
int main() {
	double x0, x1, a;
	scanf("%lf", &a);
	
	x0 = a / 2;
	x1 = 1.0 / 2.0 * (x0 + a / x0);
	
	while(fabs(x0 - x1) >= 1e-5) {
		x0 = x1;
		x1 = 1.0 / 2.0 * (x0 + a / x0);
	}
	printf("%.3lf\n", x1);
	
	return 0;
}