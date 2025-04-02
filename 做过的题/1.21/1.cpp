#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mark[8] = {0};
    for(int i=0;i<n;i++){
        if(a[i]%2==0) mark[2] = 1;
        if(a[i]%3==0) mark[3] = 1;
        if(a[i]%5==0) mark[5] = 1;
        if(a[i]%7==0) mark[7] = 1;
    }
    if (mark[2]&&mark[3]&&mark[5]&&mark[7])
    {
        cout<<"-1"<<endl;
    }else{
        ll ans = 1;
        for(int i=2;i<=7;i++){
            if(mark[i]==0){
                ans*=i;
            }
        }
        cout<<ans<<endl;
    }
    
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}