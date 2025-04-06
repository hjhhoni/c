#include <iostream>
#include<vector>
using namespace std;
int main()
{
  int n,v;cin>>n>>v;
  vector<int> wgt(n+1),val(n+1);
  for(int i=1;i<=n;i++) cin>>wgt[i]>>val[i];
  vector<vector<int>> dp(n+1,vector<int>(v+1,0));
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=v;j++)
    {
      if(wgt[i]>j){
        dp[i][j] = dp[i-1][j];
      }else{
        dp[i][j] = max(dp[i-1][j],dp[i-1][j-wgt[i]]+val[i]);
      }
    }
  } 
  cout<<dp[n][v];
  return 0;
}