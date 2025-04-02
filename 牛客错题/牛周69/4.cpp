#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<ll> a;
    for(int i=1;i<=q;i++){
        vector<string> ss(n);
        for(int j=0;j<n;j++){
            cin>>ss[j];
            for(int k=0;k<m;k++){
                if(ss[j][k]=='1'&&)
                
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}