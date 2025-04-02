#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin>>s;
    ll cnt = 0;
    char ori = s[0];
    ll i=1;
    ll len = 1;
    while (i<s.length())
    {
        if(ori!=s[i]){
            len++;
        }else{
            if(len>=2){
                cnt+=len*(len-1)/2;
                len=1;
            }
        }
        ori = s[i];
        i++;
        // cout<<i;2,3,4,5
    }
    if(len>=2){
        cnt+=len*(len-1)/2;
        len=1;
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}