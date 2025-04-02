#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

int a[10005];
void solve(){
    int L,M;
    cin>>L>>M;
    ll ans = 0;
    while (M--)
    {
        int l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=1;i<=L;i++){
        a[i]+=a[i-1];
        if(!a[i]) ans++;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}