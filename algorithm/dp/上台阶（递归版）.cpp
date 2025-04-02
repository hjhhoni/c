#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;


int dfs(int i) {
    // 已知 dp[1] 和 dp[2] ，返回之
    if (i == 1 || i == 2)   // 最内层的基础层
        return i;
    // dp[i] = dp[i-1] + dp[i-2]
    int count = dfs(i - 1) + dfs(i - 2);   //最外层
    return count;
}

void solve(){
    /* 搜索 *

    /* 爬楼梯：搜索 */
    int n;
    cin >> n;
    cout<<dfs(n);
    
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}