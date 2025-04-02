#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

int lcp(string s1,string s2){
    int i=0;
    while(i<s1.size()&&i<s2.size()&&s1[i]==s2[i]) i++;
    return i;
}
void solve(){
    int m,n;
    cin>>n>>m;
    string s[100010];
    for(auto &i:s) cin>>i;
    sort(s,s+n);
    int ans=0,mx=0;
    for(int i=0;i<n;i++){
        ans+=s[i].size()*2;
        if(i) ans-=lcp(s[i],s[i-1])*2;
        mx=max(mx,(int)s[i].size());  //max的比较时string类型，要加int进行转换
    }
    cout<<ans-mx<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}