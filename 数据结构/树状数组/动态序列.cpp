#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
 
using namespace std;
 
const int MAXN = 1000005;
 
// 数据结构：树状数组（Fenwick Tree）
struct FenwickTree {
    vector<int> bit;
    int n;
     
    // 构造函数
    FenwickTree(int n) : n(n), bit(n + 1, 0) {}
 
    // 在指定索引处增加值
    void add(int index, int value) {
        while (index <= n) {
            bit[index] += value;
            index += index & -index;
        }
    }
 
    // 计算前缀和
    int sum(int index) {
        int result = 0;
        while (index > 0) {
            result += bit[index];
            index -= index & -index;
        }
        return result;
    }
 
    // 查找第一个大于等于指定值的索引
    int lower_bound(int value) {
        int sum = 0;
        int pos = 0;
        for (int i = 20; i >= 0; i--) {
            if (pos + (1 << i) <= n && sum + bit[pos + (1 << i)] < value) {
                sum += bit[pos + (1 << i)];
                pos += (1 << i);
            }
        }
        return pos + 1;
    }
};
 
// 主函数
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n, q;
    cin >> n >> q;
 
    vector<int> a(n);
    FenwickTree ft(MAXN);
 
    // 初始化树状数组
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ft.add(a[i], 1);
    }
 
    // 处理查询
    while (q--) {
        int p, x;
        cin >> p >> x;
 
        if (p == 0) {
            // 输出第 x 小的数
            cout << ft.lower_bound(x) << '\n';
        } else {
            // 更新第 p-1 个数为 x
            ft.add(a[p - 1], -1);
            a[p - 1] = x;
            ft.add(a[p - 1], 1);
        }
    }
 
    return 0;
}