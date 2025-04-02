#include <stdio.h>
int main(){
    // 数组求和
    int n,k;
    scanf("%d %d",&n,&k);
    int c[n],a,b=0,d=k;
    while (scanf("%d",&a)&&b<n-1)
    {
        c[b]=a;
        b++;
    }
    c[b]=a;
    int c1[k];
    while (k>0)
    {
        int a1,b1,sum1=0;
        scanf("%d %d",&a1,&b1);
        for (int i=a1;i<=b1;i++){
            sum1+=c[i-1];
        }
        c1[k-1]=sum1;
        k--;
    }
    for(int i=0;i<d;i++){
        printf("%d\n",c1[d-1-i]);
    }
}