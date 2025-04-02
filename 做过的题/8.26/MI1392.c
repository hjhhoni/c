#include <stdio.h>
#include <math.h>
int main(){
    // 质因数分解
    int n;
    scanf("%d",&n);
    for(int i=1;i<=sqrt(n);i++){
        if (n%i==0)
        {
            int a=i,b=n/i,c=0;
            for (int j=1;j<=sqrt(a); j++)
            {
                if (a%j==0)
                {
                    c+=1;
                }
                
            }
            for (int j=1;j<=sqrt(b); j++)
            {
                if (b%j==0)
                {
                    c+=1;
                }
                
            }
            if (c<=2)
            {
                printf("%d",b);
                break;
            }
        }
        
    }
}