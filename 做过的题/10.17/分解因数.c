#include <stdio.h>
int zhong;
void dfs(int x,int shu){
    if (x<shu) return;
    
    for(;;shu++){
        if (x%shu==0&&x/shu==1)
        {
            zhong++;return;
        }else if (x%shu==0&&x/shu!=1)
        {
            dfs(x/shu,shu);
        } 
    }
    return;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        zhong=0;
        scanf("%d",&a);
        dfs(a,2);
        printf("%d\n",zhong);
    }
}
