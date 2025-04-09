#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int n,q;cin>>n>>q;
  vector<ll> a(n+2,0);
  for(int i=1;i<=n;i++) cin>>a[i];
  // 变差分一定要起一个差分数组，而前缀和无需
  vector<ll> diff(n+2,0);
  for(int i=1;i<=n;i++) diff[i]= a[i] - a[i-1];
  while(q--){
    int l,r,w;cin>>l>>r>>w;
    diff[l] += w;
    diff[r+1] -= w;
  }
  // 前缀和还原
  for(int i = 1;i<=n;i++){
    diff[i]+=diff[i-1];
    if(diff[i]<=0) cout<<"0"<<" ";
    else cout<<diff[i]<<" ";
  }

  return 0;
}