#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int  N = 3e5 + 10;
constexpr ll inf = 1E18;
int n,m;
// 该代码适用于解决单源最短路径问题，尤其在图的规模较大且稀疏的情况下表现良好。例如：
// Dijkstra 算法的时间复杂度为 (O((n + m) \log n))，适合处理大规模稀疏图
// 计算地图中两点之间的最短距离。
// 分析网络中数据包传输的最短路径。
ll dist[N];  // 存储从起点到每个节点的最短距离
priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>> pq;  // 优先队列存储距离和节点编号
vector <pair<int,ll>> v[N];  // 邻接表存储图

void dij(int start){

    pq.emplace(0LL,start);  // 优先队列存储距离和节点编号

    while(!pq.empty()){  // 循环直到优先队列为空
        auto [d,u] = pq.top();  // 获取当前最小距离和节点编号
        pq.pop();  // 弹出当前最小距离和节点编号

        if(dist[u] != inf) continue;  // 如果当前节点已经访问过，跳过
        dist[u] = d;  // 更新当前节点的最短距离

        for(auto [y,w] : v[u]){  // 遍历当前节点的相邻节点
            pq.emplace(d + w,y);  // 将相邻节点加入优先队列，距离为当前节点距离加上边的权重
        }
    }
}
int main() {
    std::ios::sync_with_stdio(false); // 提高输入输出效率
    std::cin.tie(nullptr);std::cout.tie(nullptr); 

    cin >> n >> m;
    for(int i = 1; i <= n; i++) dist[i] = inf; // 初始化距离数组为无穷大
    for(int i = 1; i <= m; i++){               // 输入图的边信息
        int a,b;ll c; cin >> a >> b; cin >> c;  输入边 (a, b)，权重为 c
        v[a].push_back({b,c});   // 添加到邻接表中
    }
    dij(1);  // 从节点 1 开始进行 Dijkstra 算法
    for(int i = 1; i <= n; i++){  // 输出结果
        if(dist[i] == inf) cout << -1 << ' ';  // 如果无法到达该节点，输出 -1
        else cout << dist[i] << ' ';
    }

    return 0;
}