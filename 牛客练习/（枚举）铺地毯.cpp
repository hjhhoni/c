#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

struct 
{
    int a,b,w,h;
}pu[10005];


void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>pu[i].a>>pu[i].b>>pu[i].w>>pu[i].h;
    }
    int x,y,ans=0;
    cin>>x>>y;
    for(int i=1;i<=n;i++){
        if(y<=pu[i].b+pu[i].h&&y>=pu[i].b&&x>=pu[i].a&&x<=pu[i].a+pu[i].w) ans = i;
    }
    if(ans) cout<<ans<<endl;
    else cout<<"-1"<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}