#include <iostream>
using namespace std;
int m,n;
int a[10][10]; //初始化
int d[8][2]={{1,2},{1,-2},{-1,-2},{-1,2},{2,1},{2,-1},{-2,1},{-2,-1}};
int shu=0;
void dfs(int y,int x,int step){
    if(step==m*n){shu++;return;}
    for(int i=0;i<8;i++){
        int tx=x+d[i][0];
        int ty=y+d[i][1];
        if(tx>=0&&ty>=0&&tx<n&&ty<m&&a[ty][tx]==0){
            a[ty][tx]=1;
            dfs(ty,tx,step+1);
            a[ty][tx]=0;
        }
    }
    return;
}
int main() {
    // 默认内容代码
    int x,y; 
    cin>>n>>m>>x>>y;
    a[y][x]=1;
    dfs(y,x,1);
    cout<<shu;
    return 0;
}