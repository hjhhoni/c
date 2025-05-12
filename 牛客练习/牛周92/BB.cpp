#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

int d[2][2] = {{0,1},{1,0}};
string ans = "";

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<char>> mp(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mp[i][j];
        }
    }
    int xia = 0;
    int x = 1,y = 1,f = 0;
    while (x!=n||y!=m)
    {
        int nx = x + d[f][0];  // 向右
        int ny = y + d[f][1];
        if(mp[nx][ny]==mp[x][y]){
            if(f==0)ans+='D';
            else {
                ans+='S';
                xia++;
            }
            x = nx;
            y = ny;
            if(y==m) f = 1; // 向下
            if(x==n) f = 0; // 向右
        }else{  // 碰到#
            if(f==0){
                f = 1;
            }
            else{ // 向下时碰到#
                f = 0;
                ans.substr(0,ans.size()-xia);
                y = m-1;
                x = 1;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}