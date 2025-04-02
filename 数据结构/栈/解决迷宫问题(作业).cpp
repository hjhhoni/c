#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
int d[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
typedef pair<int,int> PII;
void solve(){
    int n,m;
    cin>>n>>m;
    stack<pair<int,int>> st;
    vector<string> mp(n+1);
    for(int i=1;i<=n;i++){
        cin>>mp[i];
        mp[i] = " " + mp[i];
    }
    string ans="NO";
    int i=1,j=1;
    for(;i<=n;i++){
        for(;j<=m;j++){
            if(mp[i][j]=='s') break; //找到起点
        }
    }
    st.push({i,j}); //起点入栈
    mp[i][j]='x'; //标记为障碍物
    while(!st.empty()){
        for(int k=0;k<4;k++){
            int x = st.top().first + d[k][0];
            int y = st.top().second + d[k][1];
            if(x>=1 && x<=n && y>=1 && y<=m && mp[x][y]!='x'){
                if(mp[x][y]=='t'){
                    ans = "YES";
                    cout<<ans<<endl;
                    return;
                }
                i=x,j=y;mp[i][j]='x';st.push({i,j}); //入栈
                k=-1; //重新开始遍历
            }
        }
        PII p = st.top();st.pop(); //出栈
        st
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}