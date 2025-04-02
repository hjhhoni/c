#include <stdio.h>
int main(){
    //数字统计
    int R,L,s=0;
    scanf("%d %d",&L,&R);
    while (R>=L)
    {   
        int i=R;
        for(;i>=1;i=i/10){
            // printf("%d\n",i);
            if(i%10==2){
                s+=1;
            }
        }
        
        R--;
    }
    printf("%d",s);
    
}