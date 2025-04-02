#include <stdio.h>


int main(){
	
	struct stu
	{
		char name[100];
		int hao;
        float score;
	}ren[101];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %s %f",&ren[i].hao,&ren[i].name,&ren[i].score);
	}
    struct stu temp;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(ren[i].score<ren[j].score){
                temp=ren[i];
                ren[i]=ren[j];
                ren[j]=temp;
            }
        }
    }
	for(int i=1;i<=n;i++){
		printf("%d %s %.1f\n",ren[i].hao,ren[i].name,ren[i].score);
	}
}
