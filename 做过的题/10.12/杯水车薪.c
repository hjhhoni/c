#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        long long x,y;
        scanf("%lld %lld",&x,&y);
        if (y>=x)
        {
            printf("%lld\n",y*2);
        }else{
            printf("%lld\n",x+y);
        }
        
    }
}
