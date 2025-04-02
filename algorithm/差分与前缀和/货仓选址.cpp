#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

// 找中位数
void solve(){
    int n;
    int ans=0;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a.begin()+1,a.end());
    for(int i=1;i<=(n>>1);i++) ans+=abs(a[n-i+1]-a[i]);
    cout<<ans;
    
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}

// 题目描述：
// 在一条数轴上有N家商店，它们的坐标分别为A[1]~A[N]。现在需要在数轴上建立一家货仓，每天清晨，从货仓到每家商店都要运送一车商品。为了提高效率，求把货仓建在何处，可以使得货仓到每家商店的距离之和最小。

// 输入描述:
// 第一行一个整数N，第二行N个整数A[1]~A[N]。

// 输出描述:
// 一个整数，表示距离之和的最小值。

// 示例1
// 输入
// 4
// 6 2 9 1
// 输出
// 12 