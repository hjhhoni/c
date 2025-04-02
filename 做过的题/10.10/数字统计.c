#include <stdio.h>
int m[10]={0};
int cxk(int x){
    if(x){
        m[x%10]++;
        return cxk(x/10);
    }
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cxk(i);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",m[i]);
    }
}
