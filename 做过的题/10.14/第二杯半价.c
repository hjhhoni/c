#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        float n,x;
        scanf("%f %f",&n,&x);
        if(n==1) printf("%.0f\n",x);
        else{
            float hx=round(x/2);
            if ((int)n%2==0)
            {
                printf("%.0f\n",(n/2)*x+(n/2)*hx);
            }else{
                printf("%.0f\n",(((n-1)/2)+1)*x+((n-1)/2)*hx);
            }
            
        }
    }
}
