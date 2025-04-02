#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s,area,peri;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a){
		printf("These sides do not correspond to a valid triangle\n");
	
	}
	else {
		s=(a+b+c)/2.0;
		peri=a+b+c;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area = %.2lf; perimeter = %.2lf",area,peri);
	}
	return 0;
}
