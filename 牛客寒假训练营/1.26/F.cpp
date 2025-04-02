#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,a,b,c;cin>>n>>a>>b>>c;
    if((a+b+c<=n*2)&&(a+b+c>=n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
        
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}