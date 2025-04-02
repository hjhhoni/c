#include <iostream>
using namespace std;
typedef long long ll;


int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n,m;
    cin>>n>>m;
    int d = m-n;
    int ans;
    if(d<0) ans=m+d;
    else ans=n-d;
    cout<<ans;
    return 0;
}