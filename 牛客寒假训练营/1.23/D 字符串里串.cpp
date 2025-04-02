#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s = " " + s;
    int ans = 0;
    set<int> st;
    // 正序
    for(int i = n;i>1;i--){
        if(st.count(s[i])) ans = max(ans,i);
        st.insert(s[i]);
    }
    // 倒序
    st.clear();
    for(int i = 1;i<n;i++){
        if(st.count(s[i])) ans = max(ans,n - i + 1);
        st.insert(s[i]);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}