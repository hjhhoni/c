#include <iostream>
#include <queue>
#include <utility>

using namespace std;
typedef pair<int,int> PII;  //自定义一对数的数据类型
int n,m,sx,sy,ex,ey;
int a[101][101];
int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
void bfs(int y,int x){
    queue <PII>q;
    q.push({y,x});
    a[y][x]=1;
    while (!q.empty())
    {
        PII top=q.front();
        for(int i=0;i<4;i++){
            int tx=top.second+d[i][0],ty=top.first+d[i][1];
            if(tx>=1&&ty>=1&&tx<=n&&ty<=n&&a[ty][tx]==0){
                a[ty][tx]=a[top.first][top.second]+1;
                if(ty==ey&&tx==ex){
                    cout<<a[ty][tx];
                    return;
                }
                q.push({ty,tx});
            }
        }
        q.pop();
    }
    cout<<"-1";
    return;
}


int main() {
    cin>>n>>m;
    cin>>sx>>sy;
    cin>>ex>>ey;
    while (m--)
    {
        int v1,v2;
        cin>>v1>>v2;
        a[v2][v1]=-1;
    }
    bfs(sy,sx); 
    return 0;
}