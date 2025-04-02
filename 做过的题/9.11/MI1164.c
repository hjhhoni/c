#include <stdio.h>
int main(){
    // 美人松的高度3
    int n,a,b=0;
    scanf("%d",&n);
    int c[n];
    while (scanf("%d",&a)&&b<n-1)
    {
        c[b]=a;
        b++;
    }
    c[b]=a;
    int d;
    scanf("%d",&d);
    for (int i=0;i<n;i++)
    {
        if (c[i]!=d)
        {
            printf("%d ",c[i]);
        }
        
    }
    
}