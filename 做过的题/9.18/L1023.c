#include<stdio.h>
#include<math.h>

int main(){
	int i,j,n,m;
	double num1=0,num2=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
		num1= num1 + pow(i,2);
		num2= num2 + 1.0/i;
	}
	printf("sum = %f",num1+num2);
	return 0;
}
