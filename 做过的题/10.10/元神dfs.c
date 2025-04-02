#include<stdio.h>
int n,m,xz,yz;
long long a[101][101]={-1},sum=0;
void dfs(int x,int y){
    if(y<1||y>m||x<1||x>n||a[x][y]==-1) return;
    if(a[x][y]==0){
        if(y<1||y>m||x<1||x>n||a[x][y]==-1) return;
        a[x][y]=-1;
        // printf("%d,%d\n",x,y);
        dfs(x,y+1);//下
        dfs(x,y-1);//上
        dfs(x+1,y);//右
        dfs(x-1,y);//左
    }else{
        sum+=a[x][y];
        a[x][y]=-1;
        // printf("%d,%d\n",x,y);
        dfs(x,y+1);//下
        dfs(x,y-1);//上
        dfs(x+1,y);//右
        dfs(x-1,y);//左
    }

}
int main()
{
    scanf("%d %d",&n,&m);
    scanf("%d %d",&xz,&yz);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    dfs(xz,yz);
    printf("%lld",sum);
}