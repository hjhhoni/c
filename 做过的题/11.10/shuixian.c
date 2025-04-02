#include<stdio.h>
#include<math.h>

int checkrange(int lower,int upper){
    if(lower>upper||lower<100||upper>999){
		return -1;
	}else if(lower==upper){
		return 0; 
	}else {
		return 1;
	}
}

int isneed(int x){
	int a,b,c;
	if(100<x<999){
		a=x/100;
		b=(x%100)/10;
		c=x%10; 
		if(x==a*a*a+b*b*b*+c*c*c){
			return 1;
		}
	} else {
		return 0;
	}
}

int main(){
	int lower,upper;
    while(1){
        printf("请输入搜索范围的下界:\n");
	    scanf("%d",&lower);
	    printf("请输入搜索范围的上界:\n");
	    scanf("%d",&upper);	
	
	int checkresult=checkrange(lower,upper);
	if(checkresult==-1){
		printf("输入范围不合理，请重新输入!\n");
		continue;
	}else if(checkresult==0){
		printf("程序上下界相等，程序结束!\n");
		break; 
	}else {
		printf("该范围内水仙花数有：\n");
		for(int i=lower;lower<=upper;i++){
			if(isneed(i)==1){
			printf("%d\n",i);
			}
		}
	}
  }return 0;
}