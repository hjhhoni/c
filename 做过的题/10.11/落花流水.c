#include <stdio.h>
int n,m;
long long a[102][102]={0},book[102][102]={0};
long long dfs(int y,int x){
    if(book[y][x]!=0) return book[y][x];  //记忆化搜索
    book[y][x]=a[y][x];
    //向右
    if(x+1<=m) {long long sum=dfs(y,x+1)+a[y][x];book[y][x]=book[y][x]>sum?book[y][x]:sum;}
    //向下
    if(y+1<=n) {long long sum=dfs(y+1,x)+a[y][x];book[y][x]=book[y][x]>sum?book[y][x]:sum;}

    return book[y][x];
}
int main() {
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    long long max=dfs(1,1);
    printf("%lld",max);
}
