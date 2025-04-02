#include <iostream>
using namespace std;
typedef long long ll;
int N;
ll cnt = 0;  //取法数
void dfs(int shu,int depth,int ori){
    if(shu==depth){
        cnt++;
        return;
    }
    int j=ori+2;
    if(depth==0) j=1;
    for(;j<=N;j++){
        if(j!=ori+1){
            dfs(shu,depth+1,j);
        }
    }
    return;
}
void solve(){
    
    cin>>N;
    int mq; //最多取走个数
    if(N%2==0) mq = N/2;
    else mq = (N/2)+1;
    for(int i=0;i<=mq;i++){ //取得个数方案
        dfs(i,0,-100);
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}