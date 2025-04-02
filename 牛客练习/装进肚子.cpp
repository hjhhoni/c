#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
struct suger{
    ll a; //早上吃得到的甜蜜值
    ll b; //晚上吃得到的甜蜜值
}su[100005];


bool cmp(suger a,suger b){
    return a.a-a.b>b.a-b.b;
}

void solve(){
    ll n,k;  //早上吃k个，晚上吃n-k个
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>su[i].a;//输入第i个巧克力早上吃得到的甜蜜值
    for(int i=1;i<=n;i++) cin>>su[i].b;//输入第i个巧克力晚上吃得到的甜蜜值
    sort(su+1,su+n+1,cmp);//按早上吃得到的甜蜜值减去晚上吃得到的甜蜜值从大到小排序
    ll ans=0;
    for(ll i=1;i<=k;i++) ans+=su[i].a;
    for(ll i=k+1;i<=n;i++) ans+=su[i].b;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}