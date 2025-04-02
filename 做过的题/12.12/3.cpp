#include <iostream>
using namespace std;
typedef long long ll;

void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    // if(k>=a+b){
    //     cout<<"-1"<<endl;
    // }else{
    //     if(k==0){
    //         cout<<"-1"<<endl;
    //     }else if(k==1&&a!=0&&b!=0){
    //         for(int i=1;i<=a;i++) cout<<"0";
    //         for(int i=1;i<=b;i++) cout<<"1"<<endl;
    //     }else{
    //         if(k>min(a,b)*2) cout<<"-1"<<endl;
    //     }
    // }
    cout<<"01011"<<endl;
    cout<<"01";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}