#include <stdio.h>
int main(){
    // 统计人数
    int n,a,b=0,r=0;
    float sum=0;
    scanf("%d",&n);
    int c[n];
    while (scanf("%d",&a)&&b<n-1)
    {
        sum+=a;
        c[b]=a;
        b++;
    }
    sum+=a;
    c[b]=a;
    sum/=n;
    for(int i=0;i<n;i++){
        if (c[i]<sum)
        {
            r+=1;
        }
        
    }
    printf("%d",r);
}