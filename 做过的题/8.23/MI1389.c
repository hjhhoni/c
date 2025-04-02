#include <stdio.h>
int main(){
    //数1的个数
    int n,s=0;
    scanf("%d",&n);
    while (n>=1)
    {   
        int i=n;
        for(;i>=1;i=i/10){
            // printf("%d\n",i);
            if(i%10==1){
                s+=1;
            }
        }
        
        n--;
    }
    printf("%d",s);
    
}