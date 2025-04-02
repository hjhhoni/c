#include <iostream>
using namespace std;
typedef long long ll;

int mark[9], box[9]; //box用来按一定顺序装牌，mark用来标记牌是否用过
void dfs(int depth){
    if(depth==9){
        for(int i=1;i<=8;i++) cout<<box[i]<<" ";
        cout<<endl;
        return;
    }

    for(int i=1;i<=8;i++){
        if(!mark[i]){   //如果牌没用过，则可以放
            mark[i]=1;  //标记牌已用过
            box[depth]=i;  //按一定顺序放牌
            dfs(depth+1);  //放下一个盒子
            mark[i]=0;  //回溯，再次标记牌没用过
        }
    }
}

void solve(){
    dfs(1);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}