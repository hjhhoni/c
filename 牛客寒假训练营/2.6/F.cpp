#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,p,k;
    cin>>n>>p>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int> b;
    sort(a.begin(),a.end());
    for(int i=1;i<=k&&i<=n;i++){
        for(int j=i+1;j<=n&&j<=k;j++){
            b.push_back((a[n-i]+a[n-j])%p);
        }
    }
    sort(b.begin(),b.end());
    int i=0;
    for(;i<k&&i<b.size();i++){
        cout<<b[b.size()-i-1]<<" ";
    }
    for(;i<k;i++) cout<<"-1"<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}