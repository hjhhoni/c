#include <stdio.h>
#include <math.h>
int main(){
    //再求素数
    int n,a=2;
    scanf("%d",&n);
    while(a<=n){
        int b=0;
      
        for(int i=1;i<=sqrt(a);i++){
            if (a%i==0&&b<=1)
            {
                b+=1;
            }else if (a%i==0&&b>1)
            {
                break;
            }
        }
        if(b==1){
            printf("%d\n",a);
        }

        // printf("%d\n",a);
        a++;
    }
}