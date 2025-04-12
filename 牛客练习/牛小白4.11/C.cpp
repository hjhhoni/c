#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100005;
vector<vector<int>> a(N);
vector<int> vis(N);

int n,x,f=0;
void dfs(int xx){
    if(vis[xx]) return;
    vis[xx]=1;
    if(xx==x){
        f=1;
        return;
    }
    for(auto i:a[xx]){
        dfs(i);
    }
}
// void solve(){
//     cin>>n>>x;
//     for(int i=1;i<=n;i++){
//         int v;cin>>v;
//         a[v].push_back(i);  //v是i的祖先
//     }
//     int start = x;
//     for(auto i:a[start]){
//         dfs(i);
//     }
//     if(f) cout<<"Yes"<<endl;
//     else cout<<"No"<<endl;
// }
void solve(){
    int n, x;
    cin >>n >> x;
    vector <vector <int>> arr(n + 1);
    vector <char> vis(n + 1);
    for(int i=1;i<= n; i++){
        int nums
        cin >> num;
        arr[num].push back(i);
    }
    auto dfs =[&](auto&& dfs, int begin)-> string{
        vis[begin]= 1;
        for(int i=0;i< arr[begin].size();i++){
            if(vis[arr[begin][i]])return "yes\n";
            else return dfs(dfs, arr[begin][i]);
        }
        return "No\n";
    }
    cout << dfs(dfs, x);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}