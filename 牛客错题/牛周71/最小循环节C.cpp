#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
// 注重考查思维
void solve(){
    int a[125] = {0};
    string s;
    cin>>s;
    for(int i=0;s[i];i++){
        a[s[i]]++;
    }
    int cnt=0;
    for(int i=0;i<125;i++){
        if(a[i]!=0) cnt++;
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}