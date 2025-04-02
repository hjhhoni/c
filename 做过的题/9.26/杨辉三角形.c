#include <stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int c[sum],shu=0;
    while (k<=n)
    {
        for(int i=1;i<=k;i++){
            if (i==1||i==k)
            {
                c[shu]=1;
                printf("%d ",c[shu]);
                shu++;
            }else{
                c[shu]=c[shu-k]+c[shu-k+1];
                printf("%d ",c[shu]);
                shu++;
            } 
        }
        k++;
        printf("\n");
    }
    
}