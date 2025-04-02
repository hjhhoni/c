#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2)); // 使用vector代替普通数组
    int xu[1000001] = {0};

    for (int i = 0; i < n; i++) {
        cin >> a[i][0];
        a[i][1] = i + 1; // 序号从1开始
    }

    // 根据 a[i][0] 进行排序
    sort(a.begin(), a.end(), [](const vector<int>& a1, const vector<int>& a2) {
        return a1[0] < a2[0];
    });

    long long Max = 0, m = 0, k = 0;
    for (int v = n - 1; v >= 0; v--) {
        m++;
        if (m * m * a[v][0] >= Max) {
            Max = m * m * a[v][0];
            xu[k] = a[v][1];
            k++;
        } else {
            break;
        }
    }

    cout << m - 1 << endl;
    sort(xu, xu + k);
    for (int i = 0; i < k; i++) {
        cout << xu[i] << " ";
    }
    cout << endl; // 输出结束换行
    return 0;
}
