#include <iostream>
#include <Utility>
#include <queue>
using namespace std;
int a[101][101],x1,y1,x2,y2,mark[101][101];
typedef pair<int,int> PII;
int d[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
void bfs(int y,int x){
    queue <PII>q;
    mark[y][x]=1;
    q.push({y,x});
    a[y][x]=0;

    while (!q.empty())
    {
        PII top=q.front;
        int y=top.first,x=top.second;
        for(int i=0;i<4;i++){
            int ty=y+d[i][0],tx=x+d[i][1];
            if(ty>=1&&ty<=N&&tx>=1&&tx<=M&&a[ty][tx]==1){
                q.push({ty,tx});
                a[ty][tx]=0;
                mark[ty][tx]=mark[y][x]+1;
            }
        }
        q.pop();
    }
    
}

int main() {
    int N,M;
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            cin>>a[i][j];
        }
    }
    cin>>x1>>y1>>x2>>y2;
    bfs(y1,x1);
    if(mark[y2][x2]==0) cout<<"-1";
    else cout<<mark[y2][x2];
    return 0;
}