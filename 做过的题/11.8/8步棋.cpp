#include <iostream>
#include <utility>
#include <queue>

using namespace std;
typedef pair<int,int>PII; //创建新的数据类型得用typedef
int n,m;
char a[1100][1100];
int mark[1100][1100];
queue<PII>q;
int d[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
void bfs(){
    q.push({0,0}); //第一个入队
    mark[0][0]=0;
    while (!q.empty())
    {
        PII top=q.front();
        for(int i=0;i<4;i++){
            int ty=top.first+d[i][0],tx=top.second+d[i][1];
            if(ty>=0&&ty<n&&tx>=0&&tx<m&&a[ty][tx]=='W'){
                a[ty][tx]='B';
                mark[ty][tx]=mark[top.first][top.second]+1;
                q.push({ty,tx}); //每个入队
            }
        }
        q.pop(); //出队
    }
    if(a[n-1][m-1]=='B'&&mark[n-1][m-1]%8==0) cout<<mark[n-1][m-1]; //m，n的减一问题
    else if(a[n-1][m-1]=='B'&&mark[n-1][m-1]%8!=0){
        if(mark[n-1][m-1]==1)cout<<"-1";                  //特殊情况只有两个时终点永不为偶数
        else{
            cout<<mark[n-1][m-1]-mark[n-1][m-1]%8+8;      //特殊情况，虽然最短路径到终点不为8的倍数，但可回头增加步数达到8的倍数
        }
    }
    else cout<<"-1";
}
int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++) scanf("%s",a[i]); //不可用cin>>a[i];
    bfs();
    return 0;
}