// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N = 100005;
// vector<int> a(N);
// int l,r;
// ll ans = 0;
// ll cnt = 0; // 发动技能的次数
// ll n,k;  // 牌堆数，手牌数

// void shengxing(){  // 技能1最多发动多少次
//     k-= cnt; //弃牌
//     l++;
//     k++;  // 手牌加一
//     cnt++;  // 发动技能次数加一
// }
// void solve(){
//     cin>>n>>k;
//     l = 1,r = n;
//     for(int i=1;i<=n;i++) cin>>a[i];
//     while(k>=cnt&&l<=r){
//         shengxing(); // 发动技能1
//     }
//     // 简化问题，可以最多选择cnt次，从区间[l,r]中选择cnt个数，使得这cnt个数之和最大
//     // l = 1,r = n; // 重置牌堆，进行dp
//     // ll dp[cnt+1]={0}; // dp[i]表示选择i次，从区间[l,r]中选择cnt个数，使得这cnt个数之和最大
//     for(int i=1;i<=cnt;i++){
//         int znum = 0;
//         for(int j = 1;j<=i;j++){
//             znum+=a[j];
//             int ynum = znum;
//             for(int k=n;k>n-j+1;k--){
//                 ynum+=a[k];
//             }
//             if(ynum>ans) ans = ynum;
//         }
//     }

//     if(ans<0) cout<<"0"<<endl;
//     else cout<<ans<<endl;
// }

// int main() {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int t=1;//cin>>t;
//     while(t--) solve();
//     return 0;
// }

// 我的dfstle了，超时了，但是思路是对的，就是太慢了
#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

using namespace std;


void solve() {	
	int n;
	i64 k;
	cin>>n>>k;
	vector<i64> qz(n+2,0);
	vector<i64> hz(n+2,0);
	vector<i64> a(n+1,0);
	for (int i=1; i<=n; i++)
	  cin>>a[i];  // 存入牌堆牌面大小
	
	i64 ss=0;
	for (int i=1; i<=n; i++)
	{
		ss=ss+a[i];
		qz[i]=max(qz[i-1],ss);  // 牌堆前缀和
	}
	ss=0;
	for (int i=n; i>=1; i--)
	{
		ss=ss+a[i];
		hz[i]=max(hz[i+1],ss);  // 牌堆后缀和
	}

	int ci=0;  // 技能1最多发动次数
	for (int i=0; i<n; i++)
	{
		if (k<i)
		  break;
		ci++;
		k=k-i+1;
	}
	
	i64 ans=max(qz[ci],hz[n-ci+1]); // 先试试全部取前面或者全部取后面
	for (int i=1; i<ci; i++)  // 然后再试试取前面i张，取后面ci-i张，不一边倒，而是从左增，从右减
	{
		ans=max(ans,qz[i]+hz[n+1-(ci-i)]);
	}
	cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    //std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}