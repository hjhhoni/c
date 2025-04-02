#include<stdio.h>
int main()
{
    int days,temp;
    while(scanf("%d",&days)!=EOF){
    	temp=days%5;
    	if(temp>=1&&temp<=3) printf("Fishing in day %d\n",days);
    	else printf("Drying in day %d\n",days);
    }

	return 0;
}