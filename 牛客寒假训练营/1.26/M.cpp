#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    string s;
    cin>>s;
    map<int,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    if(mp[99]&&mp[100]&&mp[101]&&mp[110]&&mp[111]==2&&mp[114]&&mp[119]){
        cout<<"happy new year"<<endl;
    }else{
        cout<<"I AK IOI"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}