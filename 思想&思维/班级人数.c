#include<stdio.h>
//这道题的关键是审题和近似1的最少（意味着i*q-i*P%>=0.5时,强制转换int为1）
int main()
{
	double p, q;
	int people;			//定义班级人数 
	while(scanf("%lf%lf", &p, &q)!=EOF) 
	{
		for(people = 1; ; people++)
		{
		
		if((int)(people * q / 100.0) - (int)(people * p / 100.0) == 1)//因为要近似等于1，所以要强转一下 
		{
				printf("%d\n", people);
			break;
			}
		}
 
		
	}
 
 }