#include <stdio.h>
//角谷猜想
int main(){
    int a,b;
    scanf("%d",&a);
    do{
        if(a%2==0){
            b=a;
            a = a/2;
            printf("%d/2=%d\n",b,a);
        }else if (a%2!=0)
        {
            b=a;
            a=a*3+1;
            printf("%d*3+1=%d\n",b,a);
        }
        
    }while (a!=1);
    printf("End");
}