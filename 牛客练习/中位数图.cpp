#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
int mark[100005];
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+1);
    int pos,ans = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>k) a[i] = 1;
        else if(a[i]<k) a[i] = -1;
        else pos = i;  // 记录k的位置
    }
    ll sum = 0;
    for(int i=pos-1;i>=1;i--){ // 算左边的
        sum += a[i];
        mark[sum+n]++;
        if(!sum) ans++;
    }
    sum = 0;
    for(int i=pos+1;i<=n;i++){ // 算右边的
        sum += a[i];
        ans += mark[n-sum];
        if(!sum) ans++;
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}