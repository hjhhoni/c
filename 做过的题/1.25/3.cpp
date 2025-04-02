#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string>s(n+1);
    for(int i=1;i<=n;i++) cin>>s[i],s[i]=" "+s[i];
    map<string,int>cnt;
    for(int j=1;j<=m;j++){
        string t="";
        for(int i=1;i<=n;i++){
            t+=s[i][j];
        }
        cnt[t]++;  // 统计每一列的字符串，并记录出现次数，m列
    }
    int res=0;
    for(auto [s,g]:cnt){
        res=max(res,g);  // 统计出现次数最多的字符串，只需要以这个字符串为依据去改行，改成这种列全为1即可
    }
    cout<<res;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}

