#include <stdio.h>
 
int main() {
	float s = 100, h = 50;
	int i, n;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		s = s + 2 * h;
		h =  h / 2;
	}
 
	printf("%.4f", s);
}