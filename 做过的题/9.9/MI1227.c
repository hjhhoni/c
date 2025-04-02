#include <stdio.h>
int main(){
    // 整数去重
    int n,a,b=0;
    scanf("%d",&n);
    int c[n];
    while (scanf("%d",&a)&&b<n-1)
    {
        c[b]=a;
        b++;
    }
    c[b]=a;
    int d[n],e=0,f=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=e;j++){
            if (c[i]==d[j])
            {
                f++;
            }  
        }
        if (f==0)
        {
            d[e]=c[i];
            e++;
        }else{
            f=0;
        }
        
    }

    for (int i=0;i<e;i++)
    {
        printf("%d ",d[i]);
    }
    
}