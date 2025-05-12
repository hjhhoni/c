#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

int d[2][2] = {{0,1},{1,0}};
string ans = "";
int f = 0;
void dfs(int x,int y,vector<vector<char>> &mp,int n,int m,int step){
    if(f) return;
    if(x==n&&y==m){
        cout<<ans;f=1;
    }
    for(int i=0;i<2;i++){
        int nx = x + d[i][0];
        int ny = y + d[i][1];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&mp[nx][ny]!='#'){
            if(i==0) ans += 'D';
            else ans += 'S';
            dfs(nx,ny,mp,n,m,step+1);
            if(f) return;
            ans = ans.substr(0,step);
        }
    }
}
void solve(){
    int n,m;cin>>n>>m;
    vector<vector<char>> mp(n+1,vector<char>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mp[i][j];
        }
    }
    dfs(1,1,mp,n,m,0);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}