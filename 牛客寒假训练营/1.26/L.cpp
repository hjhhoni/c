#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
const int maxn = 1e5+10;
int n,b[maxn],tot;
bool vis[maxn];
vector<pair<int,int>> G[maxn];
vector<int> ans;

void add_edge(int u,int v){
    G[u].emplace_back(v,tot);
    G[v].emplace_back(u,tot++);
}
void dfs(int x){
    for(auto y:G[x]){
        if(vis[y.second]) continue;
        vis[y.second] = true;
        dfs(y.first);
    }
    ans.push_back(x);
}
void solve(){
    cin>>n;
    b[0] = 1;
    for(int i=1;i<=n;i++){
        b[i] = b[i-1] + i;    // 每行第一个元素顶点值
    }
    // 遍历每一个元素，建立邻接表
    for(int i=0;i<n;i++){  // 遍历行
        for(int j=0;j<=i;j++){  // 遍历每行的元素
            int p1 = b[i] + j, p2 = b[i+1] + j, p3 = b[i+1] + j + 1; // 三个顶点
            add_edge(p1,p2);
            add_edge(p1,p3);
            add_edge(p2,p3);
        }
    }
    dfs(1);
    cout<<"Yes"<<endl;
    for(auto x:ans) cout<<x<<' ';
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}