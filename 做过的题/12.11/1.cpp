#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    int n,t=-1,s=0;
    scanf("%d",&n);
    do{ s=s+t;t=t-2;} while(t!=n);
    printf("最后t变成了：%d",t);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}