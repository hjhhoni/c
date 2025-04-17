#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
ll cnt;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    s = " "+s;
    for(int i=1;i<=n-1;i++){
        if(s[i]==s[i+1]&&s[i]=='1') {
            s[i+1]='0';
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}