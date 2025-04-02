#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;
    cin>>n;
    // int 
    vector<int> a;
    int Min=1e9,Max=0;
    for(int i=1;i<=n;i++){
        int val;cin>>val;
        Min=min(Min,val);
        Max=max(Max,val);
        a.push_back(val);
    }
    vector<ll> dp(n); // 表示执行0到n-1次合并后的最大极差
    dp[0]=Max-Min;

    dp[n-1] = 0;

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}