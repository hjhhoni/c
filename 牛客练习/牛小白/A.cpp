#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
ll sum = 1;
void solve(){
    string s;cin>>s;
    for(auto v:s){
        if(v=='-') sum-=1;
        else sum*=2;
        if(sum>=2025) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}