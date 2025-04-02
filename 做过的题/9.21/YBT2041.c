#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int c[n*n][2];
    for(int i=0;i<n*n;i++){
        scanf("%d",&a);
        c[i][0]=a;
        c[i][1]=a;
    }
    //左斜
    for(int i=0;i<n*n;i+=n+1){
        if (c[i][1]==c[i][0])
        {
            c[i][1]=10+c[i][0];
        }
    }
    //右斜
    for(int i=n-1;i<n*n;i+=n-1){
        if (c[i][1]==c[i][0])
        {
            c[i][1]=10+c[i][0];
        }
    }
    for(int i=0;i<n*n;i++){
        printf("%d ",c[i][1]);
        if ((i+1)%n==0)
        {
            printf("\n");
        }
        
    }
}   