#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    // 对高度进行排序
    sort(heights.begin(), heights.end());
    
    int min_cost = INT_MAX;
    
    // 计算最小代价
    for (int i = 0; i <= n - k; i++) {
        int current_cost = heights[i + k - 1] - heights[i];
        min_cost = min(min_cost, current_cost);
    }
    
    cout << min_cost << endl;
    
    return 0;
}
