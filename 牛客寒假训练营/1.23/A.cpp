#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    int ans = 1;
    for(int i=1;i<=7;i++){
        int x;
        cin>>x;
        if(x>5||x<1) ans = 0;
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}   

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}