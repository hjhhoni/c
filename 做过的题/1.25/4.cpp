#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    a[0] = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i]*=k;
    }
    ll ans = 0;
    
    for(auto &i:a){
        ans = ans+i;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}