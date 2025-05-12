#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(i!=2) cout<<'a';
        else cout<<'_';
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}