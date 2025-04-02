#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    ll cnt = 0;
    int a[100010] = {0};
    if(s[0] == 'u') a[0] = 1;
    for(int i=1;i<n;i++){
        a[i] = a[i-1];
        if(s[i] == 'u') a[i] += 1;
    }
    string t = "uwawauwa";
    for(int i=2;i<n;i++){
        if(s.substr(i,8) == t){
            cnt += a[i-2];
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}