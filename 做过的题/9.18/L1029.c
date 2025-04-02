#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0) printf("Zero Equation\n");
			else printf("Not An Equation\n");
		}else{
			double x=-c/b;
			printf("%.2f\n",x);
		}
		return 0;
	}
	d=b*b-4*a*c;
	if(d>0){
		double x1=(-b+sqrt(d))/(2*a);
		double x2=(-b-sqrt(d))/(2*a);
		printf("%.2f\n%.2f\n",x1,x2);
	}else if(d<0){
		double real=-b/(2*a);
		double imag=sqrt(-d)/(2*a);
		if(real==0) real=0;
		printf("%.2f+%.2fi\n",real,imag);
		printf("%.2f-%.2fi\n",real,imag);

	}else{
		double x=-b/(2*a);
		printf("%.2f\n",x);
	}
	return 0;
} 

//纯虚根  例如：输入1,0,1  由于real=-b/(2a),所以此时得到的real==-0，如果对这种情况进行特殊处理，则会输出-0.0+1.00i 和-0.0-1.00i 导致错误
//从而使最后一个测试点过不了 
