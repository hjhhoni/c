#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    ll cnt=0;
    int len = t.length();
    for(int i=0;i<=s.length()-len;i++){
        if(s[i]==t[0]){ //头部匹配成功
            if(s.substr(i,len)==t){
                cnt++;
            }
        }
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}