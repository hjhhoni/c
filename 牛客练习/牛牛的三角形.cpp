#include <iostream>
using namespace std;
typedef long long ll;

ll n,a[110],marka[110],box[3],m=1;

void dfs(int depth){
    if(m==0) return;
    if(depth==4){
        if(box[0]+box[1]>box[2]&&box[1]+box[2]>box[0]&&box[2]+box[0]>box[1]&&box[0]&&box[1]&&box[2]){
            cout<<box[0]<<" "<<box[1]<<" "<<box[2]<<endl;
            m=0;
        }
        return;
    }
    for(int i=1;i<=n;i++){
        if(!marka[i]){  //如果a[i]没被选过
            box[depth-1]=a[i]; //选a[i]
            marka[i]=1; //标记a[i]被选过
            dfs(depth+1); //递归下一层
            marka[i]=0; //回溯
        }
    }
}

void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    dfs(1);
    if(m) cout<<"No solution"<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}