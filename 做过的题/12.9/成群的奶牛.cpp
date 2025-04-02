#include <iostream>
using namespace std;
typedef long long ll;
ll cnt = 1;

void fen(int n,int k){
    if((n-k)%2==0&&n-k>=0&&n!=k){
        cnt++;
        fen((n-k)/2,k);
        fen(((n-k)/2)+k,k);
    }
    return;
}
void solve(){
    int n,k;
    cin>>n>>k;
    fen(n,k);
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}