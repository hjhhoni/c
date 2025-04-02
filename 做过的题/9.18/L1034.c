#include <stdio.h>
int main()
{
    float s, rate, salary;
    while (scanf("%f",&salary)!=EOF)
    {
        if(salary <= 1600)
            s = 0;
        else if(salary <= 2500)
            s = 0.05*(salary - 1600);
        else if(salary <= 3500)
            s = 0.1*(salary - 1600);
        else if(salary <= 4500)
            s = 0.15*(salary - 1600);
        else
            s = 0.2*(salary - 1600);	
        printf("%.2f\n",s);	
    } 
	
	return 0;
} 
