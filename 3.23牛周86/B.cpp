// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N = 1e9+7;
// ll Min;
// ll zheng;

// void solve(){
//     int n,k;
//     zheng=0;
//     Min=0;
//     cin>>n>>k;
//     vector<ll> a(n+1);
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//         zheng+=a[i]; //所有数相加
//     }
//     for(int i=1;i<=n;i++){
//         if(a[i]<0){
//             ll temp=0;
//             vector<ll> dp(k+1);
//             for(int j=1;j<=k&&i+j-1<=n;j++){
//                 dp[j] = dp[j-1]+a[i+j-1]; //前缀和
//                 temp = min(temp,dp[j]); // 必定是与负数相比
//             }
//             Min = min(Min,temp);
//         }
//     }
//     cout<<zheng-Min<<endl;
// }

// int main() {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t=1;cin>>t;
//     while(t--) solve();
//     return 0;
// }
//////////上面是只进行一次操作的
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

ll zheng;

void solve(){
    int n,k;
    zheng=0;
    cin>>n>>k;
    vector<ll> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>0)zheng+=a[i]; //所有数相加
    }

    cout<<zheng<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}