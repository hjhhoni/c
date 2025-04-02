#include <stdio.h>
int main(){
    int n,m,a;
    scanf("%d %d",&n,&m);
    int c[m*n];
    for(int i=0;i<n*m;i++){
        scanf("%d",&a);
        c[i]=a;
    }
    for(int i=0;i<n*m;i++){
        scanf("%d",&a);
        c[i]+=a;
    }
    for(int i=0;i<n*m;i++){
        printf("%d ",c[i]);
        if ((i+1)%m==0)
        {
            printf("\n");
        }
        
    }
}