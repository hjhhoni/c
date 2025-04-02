#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;


void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 1;i<=n;i++) a[i] = i;
    if(n%2==0){
        int u = 1,v = n/2+1;
        for(int i = 1;i<=n;i++){
            if(i%2) cout<<a[v++]<<" ";
            else cout<<a[u++]<<" ";
        }
    }else{
        int u = 1,v = n/2+1;
        cout<<a[v++]<<" ";
        for(int i = 3;i<=n+1;i++){
            if(i%2) cout<<a[v++]<<" ";
            else cout<<a[u++]<<" ";
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}