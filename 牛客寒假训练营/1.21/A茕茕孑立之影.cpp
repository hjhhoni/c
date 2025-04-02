#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;cin>>n;
    int a = 1e9+7;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1){
            a = -1; //不可以直接输出-1然后return，因为后面还有输入
        }
    }
    cout<<a<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}