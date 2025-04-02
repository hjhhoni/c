#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,x,y;
ll dp[21][21];

int main(){
    cin>>n>>m>>x>>y;
    // 初始化
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++){
            dp[i][j]=1;
        }
            // 重点：坐标轴向下为x，向右为y，且从0，0开始止于n,m
    if(x-1>=0&&y-2>=0) dp[x-1][y-2]=0;
    if(x-2>=0&&y-1>=0) dp[x-2][y-1]=0;
    if(x-2>=0&&y+1<=m) dp[x-2][y+1]=0;
    if(x-1>=0&&y+2<=m) dp[x-1][y+2]=0;
    if(x+1<=n&&y+2<=m) dp[x+1][y+2]=0;
    if(x+2<=n&&y+1<=m) dp[x+2][y+1]=0;
    if(x+2<=n&&y-1>=0) dp[x+2][y-1]=0;
    if(x+1<=n&&y-2>=0) dp[x+1][y-2]=0;
    dp[x][y]=0;
    // 动态转移
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            if(dp[i][j]){
                if(i==0&&j==0) continue;
                else if(i==0) dp[i][j] = dp[i][j-1];
                else if(j==0) dp[i][j] = dp[i-1][j];
                else dp[i][j] = dp[i][j-1]+dp[i-1][j];
            }
    cout<<dp[n][m];
}
// 题目描述：
// 如图，A点有一个过河卒，需要走到目标B点。卒行走规则：可以向下、或者向右。同时在棋盘上的任一点有一个对方的马（如上图的C点），该马所在的点和所有跳跃一步可达的点为对方马的控制点。例如上图C点上的马可以控制9个点（图中的P1，P2…P8和C）。卒不能通过对方马的控制点。
// 棋盘用坐标表示，A点(0,0)、B点(n,m) (n,m为不超过20的整数，并由键盘输入)，同样马的位置坐标是需要给出的(约定: C<A，同时C<B) 。现在要求你计算出卒从A点能够到达B点的路径的条数。

// 输入描述:
// 输入B点的坐标（n，m）以及对方马的坐标（x，y）(不用判错)

// 输出描述:
// 输出一个整数（路径的条数） 。 