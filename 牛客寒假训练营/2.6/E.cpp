#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    map<int,ll> mp1,mp2;
    vector a(n+1,vector<int>(m+1)); //动态构建n行m列的二维数组
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            mp1[i+j]+=a[i][j];  // 左倾对角线
            mp2[i-j]+=a[i][j];  // 右倾对角线
        }
    }
    auto ans = 0ll;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans = max(ans,mp1[i+j]+mp2[i-j]-a[i][j]);
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}