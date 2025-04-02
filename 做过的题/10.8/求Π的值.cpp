#include<cstdio>
#include<cmath>
using namespace std;
double arctanx(double x)
{
	double sum=0,tmp=x;
	for(int i=1;;i+=2)
	{
		sum+=(tmp/i);//构造数项基本模样
		tmp=-1*tmp*x*x;//来还相反 每次幂要加两次1
		if(fabs(tmp/i)<1e-6)//直到项小于1e-6
		   break;
	}
        return sum;//值返回给sum
}
int main()
{
	printf("%.10lf",6*arctanx(1/sqrt(3)));//调包输出
}