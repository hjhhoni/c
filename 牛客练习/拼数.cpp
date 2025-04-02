#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

bool cmp(string a,string b){
    return a+b>b+a;
}
void solve(){
    int n;
    cin>>n;
    vector<string> a;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++) cout<<a[i];
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}