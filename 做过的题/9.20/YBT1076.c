#include <stdio.h>
int main(){
    int n,max=0,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if (90<=a<=140&&60<=b<=90)
        {
            k++;
        }else{
            k=0;
        }
        if (k>max)
        {
            max=k;
        } 
    }
    printf("%d",max);
}