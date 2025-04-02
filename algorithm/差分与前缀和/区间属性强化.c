#include <stdio.h>
int dif[100010]={0};
void add(int L,int R,int k){
    dif[L]+=k;
    dif[R+1]-=k;
}
int main() {
    int n,k;
    long long m;
    scanf("%d %lld %d",&n,&m,&k);
    for(int i=1;i<=k;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        add(l,r,1);
    }
    //对差分数组进行前缀和，还原序列
    for(int i=1;i<=n;i++){
        dif[i]+=dif[i-1];
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        if(dif[i]==0) sum+=1;
    }
    printf("%d",sum);
}
