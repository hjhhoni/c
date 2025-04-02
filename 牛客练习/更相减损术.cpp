#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void solve(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}