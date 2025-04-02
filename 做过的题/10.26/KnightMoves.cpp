#include <iostream>
#include<cstring>
#include<utility>
#include<queue> 
using namespace std;
typedef pair<int, int> PII; 
int n,qx,qy,zx,zy,a[301][301];
int d[8][2]={{1,2},{1,-2},{2,1},{2,-1},{-1,2},{-1,-2},{-2,1},{-2,-1}};
void bfs(){
    queue<PII>q;
    q.push({qy,qx});
    a[qy][qx]=1;
    while (!q.empty())
    {
        PII top=q.front();
        int y=top.first,x=top.second;
        if(a[zy][zx]!=0){
            cout<<a[zy][zx]-1<<endl;
            return;
        }
        for(int i=0;i<8;i++){
            int tx=x+d[i][0],ty=y+d[i][1];
            if(tx>=0&&ty>=0&&tx<=n&&ty<=n&&a[ty][tx]==0){  //941上这道题坑爹，办错了，要在边界加上=
                q.push({ty,tx});
                a[ty][tx]=a[y][x]+1;
            }
        }
        q.pop();
    }
    return; 
}


int main() {
    int k;
    cin>>k;
    while (k--)
    {
        memset(a,0,sizeof(a)); //初始化
        cin>>n;
        cin>>qy>>qx;
        cin>>zy>>zx;
        if(qx==zx&&qy==zy) {
            cout<<"0"<<endl;
        }else
        {
            bfs();
        }
    }
    
    return 0;
}