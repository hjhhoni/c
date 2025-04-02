#include <stdio.h>
int main(){
    int c[100],a,n=0;
    while (scanf("%d",&a)!=EOF)
    {
        c[n]=a;
        n++;
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",c[i]);
    }
}