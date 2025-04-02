#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c[102]={-1},v=0;
    while (n>0)
    {
        c[v]=n%2;
        v++;
        n/=2;
    }
    v--;
    for(;v>=0;v--){
        printf("%d",c[v]);
    }
}