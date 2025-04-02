#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin>>s;
    char ori = s[0];
    ll cnt=0;
    for(int i=1;i<s.length();i++){
        if(ori!=s[i]) {
            cnt++;
        }
        ori = s[i];
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}