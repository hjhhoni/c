#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    string s;cin>>s;
    char l = s[0];
    int f = 0;
    for(int i=1;i<s.size();i++){
        if(s[i]==l) f = 1;
        l = s[i];
    }
    if(f>1) cout<<"NO";
    else cout<<"YES";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}