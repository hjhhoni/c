#include <stdio.h>
int main(){
    int sum,a,b,n=0;
    scanf("%d %d %d",&a,&b,&sum);
    for(int i=1;i<=sum;i++){
        if(i*a<=sum/2){
            for(int j=1;j<=(sum-a*i);j++){
                if ((sum-a*i)/b==j)
                {
                    n+=1;
                }
                
            }
        }else{
            break;
        }
    }
    printf("%d",n);
}   