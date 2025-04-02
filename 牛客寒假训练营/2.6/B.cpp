#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
char s[11];
ll ans,n;
void dfs(int x){
    if(x==n+1){
        int i,j,cnt10,cnt01;
        for(i=1;i<=n;i++){
            s[i]^=1; // 反转操作
            cnt01=cnt10=0;
            for(j=2;j<=n;j++){
                if(s[j]=='0' && s[j-1]=='1') cnt10++;
                if(s[j]=='1' && s[j-1]=='0') cnt01++;
            }
            if(cnt10==cnt01) ans++;
            s[i]^=1; // 反转回来
        }
        return;
    }
    if(s[x]=='?'){
        s[x] = '0';
        dfs(x+1);
        s[x] = '1';
        dfs(x+1);
        s[x] = '?';
    }else{
        dfs(x+1);
    }
}
void solve(){
    scanf("%d",&n);
    ans = 0;
    scanf("%s",s+1);
    dfs(1);
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;scanf("%d",&t);
    while(t--) solve();
    return 0;
}