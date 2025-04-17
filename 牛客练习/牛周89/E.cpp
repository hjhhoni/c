#include<vector>
#include<iostream>
#include <string>
using namespace std;
typedef long long ll;
const int N = 1e9 + 7;
int n, m;
vector<string> a(101);
vector<vector<int>> vis(101,vector<int>(101));
int d[4][2] = {{-1,0},{0,1},{1,0},{0,-1}},f=0;
ll cnt;
vector<string> ans;

void dfs(int x, int y,int depth) {

    a[x][y] = '1';
    for (int i = 0;i < 4;i++) {
        int nx = x + d[i][0];
        int ny = y + d[i][1];
        if (nx <= 0 || nx > n || ny <= 0 || ny > m) continue;
        if (a[nx][ny] == '0') { // 相邻点一样为0
            f = 1;
            cnt+=depth;
            ans.push_back(to_string(x) + " " + to_string(y) + " " + to_string(nx) + " " + to_string(ny));
            return;
        }
        a[nx][ny] = '0';
        dfs(nx, ny,depth+1);
        a[nx][ny] = '1';
        if(f){
            ans.push_back(to_string(x) + " " + to_string(y) + " " + to_string(nx) + " " + to_string(ny));
            return;
        }
    }
    if(!f) a[x][y] = '0';
}

void solve() {
    cin >> n >> m;
    for (int i = 1;i <= n;i++) {
        cin >> a[i];
        a[i] = " " + a[i];
    }
    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= m;j++) {
            if (a[i][j] == '0') {
                vis[i][j] = 1;
                dfs(i, j,1);f=0;
                vis[i][j] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;//cin>>t;
    while (t--) solve();
    return 0;
}