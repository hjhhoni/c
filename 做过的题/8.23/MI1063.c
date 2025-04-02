#include <stdio.h>
int main(){
    //韩信点兵
    int a,b,c,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    int j=1;
    for(int i=10;i<=100;i++){
        if(i%7==c&&i%5==b&&i%3==a){
            // printf("%d",i);
            sum+=1;
            if(sum==1){
                printf("%d",i);
                break;
            }
        }
    }
    if (sum==0)
    {
        printf("No answer");
    }
}