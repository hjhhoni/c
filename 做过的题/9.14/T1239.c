#include <stdio.h>
int main(){
    int n,w=0;
    scanf("%d",&n);
    int c[100];
    for(;n>=10;){
        c[w]=n%10;
        w++;
        n/=10;
    }
    c[w]=n;
    printf("%d\n",w+1);
    for (int i=w;i>=0;i--)
    {
        printf("%d ",c[i]);
    }
    printf("\n");
    for(int i=0;i<=w;i++){
        printf("%d",c[i]);
    }
    return 0;
}