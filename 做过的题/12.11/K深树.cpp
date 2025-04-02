#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<int> values;
int maxValue = -1;
int maxNode = -1;
int n, k;

void dfs(int node, int depth) {
    // 检查深度限制
    if (depth <= k) {
        if (values[node] > maxValue || (values[node] == maxValue && node < maxNode)) {
            maxValue = values[node];
            maxNode = node; // 题目要求返回节点编号从1开始
        }
    }
    // 遍历所有邻接节点
    for (int neighbor : graph[node]) {
        dfs(neighbor, depth + 1);
    }
}

int main() {
    cin >> n >> k;

    values.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    graph.resize(n);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        graph[u - 1].push_back(v - 1); // 转换为0-index
        graph[v - 1].push_back(u - 1); // 无向图
    }

    // 遍历所有节点作为根节点
    for (int i = 0; i < n; i++) {
        maxValue = -1;
        maxNode = -1;
        dfs(i, 0); // 从当前节点开始
        if (maxNode != -1) {
            cout << maxNode + 1 << endl; // 输出结果，节点编号从1开始
        }
    }

    return 0;
}