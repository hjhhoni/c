#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
ll MIN = 1e18;
ll cnt = 0;
ll n,m;
vector<string> mp(510);

// 下 上 右 左
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
queue <pair<int,int>> q;
void dfs(int y,int x){


    (mp[y])[x]='2';
    for(int i=0;i<4;i++){ //检视周围
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0&&nx<m&&ny>=0&&ny<n&&(mp[ny])[nx]=='0'){
            cnt++;
            (mp[ny])[nx] = '3';
            q.push({ny,nx});
        }
    }
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0&&nx<m&&ny>=0&&ny<n&&(mp[ny])[nx]=='1'){
            dfs(ny,nx);
        }
    }
    return;
}


void solve(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>mp[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((mp[i])[j]=='1'){
                cnt=0;
                dfs(i,j);
                while (!q.empty())
                {
                    int x = q.front().second;
                    int y = q.front().first;
                    mp[y][x]='0';
                    q.pop();
                }
                
                MIN = min(MIN,cnt);
            }
        }
    }
    cout<<MIN<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}