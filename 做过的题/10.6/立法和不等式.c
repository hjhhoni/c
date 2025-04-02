
#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int i=1;
    while (1)
    {
        if (sum<n)
        {
            sum+=i*i*i;
            i++;
        }else if (sum==n)
        {
            printf("%d",i-1);
            return 0;
        }else{
            i-=2;
            printf("%d",i);
            return 0;
        }
        
        
    }
    
    
    printf("%d",i);
    
}
