#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
int dp[5010][5010];
const int maxn = 5e3 + 5;
int ans;
void solve(){
    int n,r;
    cin>>n>>r;
    int x,y,v;
    while (n--)
    {
        cin>>x>>y>>v; 
        dp[y+1][x+1]=v; //从1开始方便前缀和
    }
    // 算出正方向右下角的行列前缀和
    for(int yy=1;yy<=maxn;yy++){
        for(int xx=1;xx<=maxn;xx++){
            dp[yy][xx] += (dp[yy-1][xx] + dp[yy][xx-1] -dp[yy-1][xx-1]);
        }
    }
    // 计算最大正方形的值
    for(int yy=r;yy<=maxn;yy++){
        for(int xx=r;xx<=maxn;xx++){
            ans = max(ans,(dp[yy][xx] - dp[yy-r][xx] - dp[yy][xx-r] + dp[yy-r][xx-r]));
        }
    }

    cout<<ans;
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}
// 题号: NC20032
// 时间限制: C/C++/Rust/Pascal 1秒，其他语言2秒
// 空间限制: C/C++/Rust/Pascal 256 M，其他语言512 M
// 64bit IO Format: %lld

// 题目描述
// 一种新型的激光炸弹，可以摧毁一个边长为R的正方形内的所有目标。
// 现在地图上有n(N ≤ 10000)个目标，用整数Xi,Yi(其值在[0,5000])表示目标在地图上的位置，每个目标都有一个价值。
// 激光炸弹的投放是通过卫星定位的，但其有一个缺点，就是其爆破范围，即那个边长为R的正方形的边必须和x，y轴平行。
// 若目标位于爆破正方形的边上，该目标将不会被摧毁。

// 输入描述:
// 输入文件的第一行为正整数n和正整数R，接下来的n行每行有3个正整数，分别表示 xi，yi ，vi 。

// 输出描述:
// 输出文件仅有一个正整数，表示一颗炸弹最多能炸掉地图上总价值为多少的目标（结果不会超过32767）。

// 示例1
// 输入
// 2 1
// 0 0 1
// 1 1 1
// 输出
// 1 