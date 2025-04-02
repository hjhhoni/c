#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    ll x,y,z,a,b,c;
    cin>>x>>y>>z>>a>>b>>c;
    ll ans = 0;
    if(x*a>ans) ans = x*a;
    if(y*b>ans) ans = y*b;
    if(z*c>ans) ans = z*c;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}