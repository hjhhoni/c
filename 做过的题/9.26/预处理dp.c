#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    //预处理
    int b[n],min=100000;
    for(int i=n-1;i>=0;i--){
        if (c[i]<min)
        {
            b[i]=min;
            min=c[i];
            // b[i]=min;
        }else{
            b[i]=min;
        } 
    }
    for(int i=0;i<n;i++){
        if (i==n-1)
        {
            printf("no");
        }else{
            printf("%d ",c[i]-b[i]);
        }
    }
}