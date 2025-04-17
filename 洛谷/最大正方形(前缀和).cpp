#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
ll ans;
void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    // 前缀和
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]+=a[i][j-1];
        }
    }

    for(int l=100;l>=1;l--){  // 边长
        for(int j=1;j+l-1<=n;j++){ // 遍历每行作为开始行
            for(int i=0;i+l<=m;i++){ //每行开始遍历左上角
                ll S = 0;
                for(int k=0;k<=l-1;k++){
                    S+=(a[k+j][i+l] - a[k+j][i]);
                }
                if(S==l*l){
                    cout<<l;
                    return;
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}