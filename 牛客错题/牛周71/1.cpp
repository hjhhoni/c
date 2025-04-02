#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    int n,k;
    cin>>n>>k;
 
    if(k<=n-1){
        printf("YES");
    }else{
        printf("NO");
    }

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}