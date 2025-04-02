#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int a,b;
    int ans = 1;
    cin>>a>>b;
    if(a==b||(a+b==1)) cout<<ans<<endl;
    else{
        int i=a-b;
        if(i<0) i=-i;
        while (i)
        {
            ans++;
            i=i>>1;
        }
        cout<<ans<<endl;
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}