#include <stdio.h>


int main(){
	struct data
	{
		int year;
		int month;
	};
	
	struct stu
	{
		char name[100];
		char gender[6];
		struct data birthday;
	}ren[101];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s %s %d %d",&ren[i].name,&ren[i].gender,&ren[i].birthday.year,&ren[i].birthday.month);
	}
    struct stu temp;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(ren[i].birthday.year<ren[j].birthday.year){
                temp=ren[i];
                ren[i]=ren[j];
                ren[j]=temp;
            }else if (ren[i].birthday.year==ren[j].birthday.year)
            {
                if(ren[i].birthday.month<ren[j].birthday.month){
                    temp=ren[i];
                    ren[i]=ren[j];
                    ren[j]=temp; 
                }
            }
            
        }
    }
	for(int i=1;i<=n;i++){
		printf("%s %s %d %d\n",ren[i].name,ren[i].gender,ren[i].birthday.year,ren[i].birthday.month);
	}
}
