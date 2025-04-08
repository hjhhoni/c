// Floyd通常指的是Floyd-Warshall算法，这是一种用于计算图中所有节点对之间最短路径的算法。它是一种动态规划算法，特别适用于稠密图。Floyd-Warshall算法的时间复杂度为O(V^3)，其中V是图中节点的数量。这个算法可以处理有向图和无向图，也可以处理边权为负的图，但前提是图中不能存在负权环。

// 在编程中，INF 通常用来表示一个很大的数值，这个数值在算法中用来表示无穷大或一个不可达的状态需要注意的是，0x3f3f3f3f 是一个 32 位整数的最大值的近似值，而 0x3f3f3f3f3f3f3f3f 则是一个 64 位整数的最大值的近似值。这两个值在不同的数据类型中用作“无穷大”来确保在计算过程中不会溢出，并且可以安全地与其他数值进行比较。
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f3f3f3f3f
#define MAXN 405
using namespace std;
typedef long long ll; 

// Floyd-Warshall算法,带权图如果数据小的话可以用邻接矩阵存储，如果数据太大了，可以用邻接表存储

typedef struct
{
  ll arc[405][405];
}Graph;
int main()
{
  Graph G;
  memset(G.arc,0x3f,sizeof(G.arc));  // 初始化每个值为0x3f3f3f3f3f3f
  ll N,M,Q;cin>>N>>M>>Q;
  while(M--){  // 存入最小权路径
    ll u,v,w;cin>>u>>v>>w;
    G.arc[u][v] = min(G.arc[u][v],w);
    G.arc[v][u] = min(G.arc[v][u],w);
  }
  for(int i = 0; i <= N; i++) {    //这行代码的作用是将每个节点到自身的距离初始化为0。
      G.arc[i][i] = 0;
  }

  // dp求两点之间最短路径
  for(int i=1;i<=N;i++)
    for(int j=1;j<=N;j++)
      for(int k=1;k<=N;k++)
        G.arc[j][k] = min(G.arc[j][k],G.arc[j][i] + G.arc[i][k]);

  while(Q--){
    ll u,v;cin>>u>>v;
    if(G.arc[u][v]==INF){
      cout<<"-1"<<endl;
    }else cout<<G.arc[u][v]<<endl;
  }
  return 0;
}