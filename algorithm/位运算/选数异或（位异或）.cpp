/*
设dp[i][j]表示到第i个数字为止（但不一定以第i个数字结尾），异或和为j的子序列个数
对于第i层的状态，转移的方式有“选第i个”和“不选第i个”两种
转移方程为dp[i][j]=dp[i-1][j]（不选第i个，异或和没变化还是j）+dp[i-1][j^a[i]]（选第i个，异或和发生变化）
最后结果就是dp[n][x]
*/
//异或，二进制位上数字不一样才为1
// #include <bits/stdc++.h>
// using namespace std;
// const int N=1e5+9;
// const long long p=998244353;
// int a[N],dp[N][70];
// int main()
// {
//   int n,x;
//   cin>>n>>x;
//   for(int i=1;i<=n;i++)
//   {
//     cin>>a[i];
//   }
//   dp[0][0]=1;//什么都不做的方案有一种
//   for(int i=1;i<=n;i++)
//   {
//     for(int j=0;j<64;j++)
//     {
//       dp[i][j]=(dp[i-1][j]+dp[i-1][j^a[i]])%p;//状态转移方程
//     }
//   }
//   cout<<dp[n][x]<<endl;
//   return 0;
// }
#include <iostream>
using namespace std;
int dp[100010][64];
int a[64];
int main()
{
  int n,x;
  cin>>n>>x;
  for(int i=1;i<=n;i++) cin>>a[i];
  dp[0][0]=1;
  for(int i=1;i<=n;i++){
    for(int j=0;j<64;j++){
      dp[i][j]=dp[i-1][j]+dp[i-1][j^a[i]];
    }
  }
  cout<<dp[n][x];
  return 0;
}