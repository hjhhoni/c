#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n,m;cin>>n>>m;
    char v;
    map<int,int> ma;
    map<int,int> mb;
    // 抵消掉a,b串一样多的字符
    for(int i=1;i<=n;i++){
        cin>>v;
        ma[v]++;
    }
    for(int i=1;i<=m;i++){
        cin>>v;
        if(ma[v]>0) ma[v]--;  // 若a有，则抵消，否则b有
        else mb[v]++;
    }
    // 剩下的都是a,b特有的字符
    // bd   caac  2
    // b    caacc  1
    // a    bcd    2
    // b    ccdd   2
    int a=0,b=0;
    for(auto it:ma){
        if(it.second>0) a+=it.second;
    }
    for(auto it:mb){
        if(it.second>0) b+=it.second;
    }
    if(a==0){  // 处理b为回文串
        int ans=0;
        for(auto it:mb){
            ans+=it.second%2;
        }
        cout<<ans/2<<endl;
    }else if(b==0){  // 处理a为回文串
        int ans=0;
        for(auto it:ma){
            ans+=it.second%2;
        }
        cout<<ans/2<<endl;
    }else{
        if(a==b) cout<<a<<endl;
        else{
            if(a<b){
                int ans=0;
                for(auto it:mb){
                    ans+=it.second%2;
                }
                ans = a+(ans+1)/2;
                cout<<ans<<endl;
            }else{
                int ans=0;
                for(auto it:ma){
                    ans+=it.second%2;
                }
                ans = b+(ans+1)/2;
                cout<<ans<<endl; 
            }
        }
    }
}   

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}