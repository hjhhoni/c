#include <stdio.h>
long long count=0;
void zhuan(int n){
    while (n>0)
    {
        int v=n%2;
        if(v) count++;
        n/=2;
    }
    
}
int main(){
    int l,r;
    scanf("%d %d",&l,&r);
    for(int i=l;i<=r;i++){
        zhuan(i);
    }
    printf("%lld",count);
}
