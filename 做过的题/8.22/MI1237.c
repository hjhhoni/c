#include <stdio.h>
#include <math.h>
int main(){
    //第n小的质数
    int n,a=2,c=0;
    scanf("%d",&n);
    while(a>0){
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
            // printf("%d\n",a);
            c+=1;
        }

        if(c==n){
            printf("%d",a);
            break;
        }
        a++;
    }
    
}