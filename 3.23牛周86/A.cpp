#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    int k = m/n;
    if(k*n==m) cout<<k;
    else if(k*n<m) cout<<k+1;
    else cout<<k-1;

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}