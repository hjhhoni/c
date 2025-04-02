#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int c[m][n],m1=0,n1=0;
    for(int i=1;i<=m*n;i++){
        int a;
        scanf("%d",&a);
        c[m1][n1]=a;
        if (i%n==0)
        {
            m1+=1;
            n1=0;
        }else{
            n1+=1;
        } 
    }
    m1=m,n1=0;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            printf("%d ",c[j][i]);
        }
        printf("\n");
    }
}   