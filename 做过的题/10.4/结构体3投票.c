#include <stdio.h>
#include <string.h>

int main(){
	
    struct Person {
        char name[20];      // 候选人姓名
        int count;          // 得票数
    } leader[3] = {"Li", 0, "Zhang", 0, "Sun", 0};
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
        char c[20]={'\0'};
		scanf("%s",c);
        for(int j=0;j<3;j++)
        if (strcmp(c,leader[j].name)==0)
        {
            leader[j].count++;
        }
	}

	for(int i=0;i<3;i++){
		printf("%s:%d\n",leader[i].name,leader[i].count);
	}
}
