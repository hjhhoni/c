#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a;
  while(n--)
  {
    int v;cin>>v;
    a.push_back(v);
  }
  sort(a.rbegin(),a.rend());
  for(int i=a.size()-1;i>=0;i--) cout<<a[i]<<" ";
  cout<<endl;
  for(auto i:a) cout<<i<<" ";
  return 0;
}