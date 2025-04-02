#include <stdio.h>
int main(){
    int n,a,max=0;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        c[i]=a;
    }
    for(int i=0;i<n;i++){
        if (c[i]>max)
        {
            max=c[i];
        } 
    }
    for(int i=0;i<n;i++){
        if (c[i]==max)
        {
            printf("%d",i+1);
        }
        
    }
}