#include <stdio.h>
int main(){
    // 数组一维转二维
    int n,a;
    scanf("%d",&n);
    int k=0,c[n];
    while (scanf("%d",&a)&&k<n-1)
    {
        c[k]=a;
        k++;
    }
    c[k]=a;
    // int b[n];
    for(int i=0;i<n;i++){
        int k=i;
        for(int j=0;j<n;j++){
            if(k!=n-1){
                printf("%d ",c[k]);
                k+=1;
            }else{
                printf("%d ",c[k]);
                k=0;
            }
        }
        printf("\n");
    }
}