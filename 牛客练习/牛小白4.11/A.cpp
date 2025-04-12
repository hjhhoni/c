#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i]==1) a[i] = 0;
        else a[i] -= 1;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}