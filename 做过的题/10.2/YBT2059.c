#include <stdio.h>
int main(){
    int x,a=0,b=0,c=0;
    scanf("%d",&x);
    int k=x;
    if (x%4==0)
    {
        printf("%d %d %d",a,b,x/4);
        return 0;
    }else{
        c=x/4;
        for(int i=1;c>=1;i++){
            x=k;
            c=(x/4)-i;
            // printf("%d",c);
            x-=c*4;
            if (x%5==0)
            {
                printf("%d %d %d",a,x/5,c);
                return 0;
            }else{
                for(int j=1;;j++){
                    b=(x/5)-j;
                    x-=b*5;
                    if (x%6==0)
                    {
                        printf("%d %d %d",x/6,b,c);
                        return 0;
                    }else{
                        break;
                    }
                }
            }
            
        }

    }
    
}