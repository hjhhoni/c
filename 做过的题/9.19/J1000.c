#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c[n*n],k=0,m=0;
    for(int i=1;i<=n*n;i++){
        if (m==0)
        {
            c[k]=i;
            k++;
        }else if (m==1)
        {
            c[k]=i;
            k--;
        }
        if (i%n==0)
        {
            if (m==0)
            {
                m=1;
                k+=n-1;
            }else{
                m=0;
                k+=n+1;
            } 
        }
    }
    for(int i=0;i<n*n;i++){
        printf("%d ",c[i]);
        if ((i+1)%n==0)
        {
            printf("\n");
        }
        
    }
}