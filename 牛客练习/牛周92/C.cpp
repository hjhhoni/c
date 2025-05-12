#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;cin>>n;
    if(n<=2) {
        cout<<-1;
        return;
    }
    
    cout<<1;
    for(int i=n;i>=2;i--) cout<<" "<<i;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}