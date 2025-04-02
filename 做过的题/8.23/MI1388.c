#include <stdio.h>
int main(){
    //与7无关的数
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%7!=0){
            int k,n=0;
            for(k=i;k>=10;k=k/10){
                if(k%10==7){
                    n+=1;
                }    
            }
            if(k!=7&&n==0){
                sum+=i*i;
            }
        }
    }
    printf("%d",sum);

}