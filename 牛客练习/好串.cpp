#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    ll cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='a') cnt++;
        if(s[i]=='b') cnt--;
        if(cnt<0){
            cout<<"Bad"<<endl;
            return;
        }
    }
    if (cnt==0)cout<<"Good"<<endl;
    else cout<<"Bad"<<endl;
    
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}