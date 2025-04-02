#include <stdio.h>

int main(){
    int a,k;
    scanf("%d %d",&a,&k);
    int n;
    scanf("%d",&n);
    int ac=1,kc=1;
    for(int i=1;i<=n;i++){
        printf("%d %d\n",ac,kc);
        if (ac==a) ac=0;
        if(kc==k) kc=0;
        ac++,kc++;
    }
}