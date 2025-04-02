#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    ll n,m;cin>>n>>m; // 6,2
    ll gap = abs(n-m); // 4
    ll T = m,ans=1;  // 2,1
    if(m>=n){
        cout<<"1"<<endl;
        return;
    }
    while(abs(T*m-n)<gap){
        T*=m;
        gap = abs(T-n);
        ans++;
        
    }
    cout<<ans<<endl;
    // 8 12 16
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}