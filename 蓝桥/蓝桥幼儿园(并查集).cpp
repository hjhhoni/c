#include <bits/stdc++.h>
using namespace std;
#define MAXN 200010
vector<int> rep(MAXN);
int find(int x){
  if(rep[x]!=x) rep[x] = find(rep[x]); // 递归查找元素 x 所属集合的根节点，并进行路径压缩（即将查找路径上的所有节点直接连接到根节点，以优化后续查找效率），更新根节点
  return rep[x];
}

void unite(int x,int y){
  rep[find(y)] = find(x);  // 将y集合的根节点指向x集合的根节点，合并集合
}

int main()
{
  int n,m;cin>>n>>m;
  
  
  for(int i = 1;i<=n;i++) rep[i] = i; // 每个元素独立集合，根节点为自身
  while(m--){
    int op,x,y;cin>>op>>x>>y;
    if(op==2){
      if(find(x)==find(y)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }else{
      unite(x,y);
    }
  }
  return 0;
}