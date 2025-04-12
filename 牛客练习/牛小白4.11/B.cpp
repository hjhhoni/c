#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        a[x]+=1;
    }
    ll ans = 0;
    for(int i=n;i>=1;i--){
        if(a[i]) ans+=i;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}