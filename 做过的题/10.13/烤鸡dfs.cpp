#include<iostream>
using namespace std;

int n, sum, ans[10001][11], a[11];

void search(int x, int y) {
    if (x > 10) { // 当已经尝试了所有的配料种类时
       if (y == n) { // 如果当前组合的美味程度等于目标美味程度 n
            sum++;
            for (int i = 1; i <= 10; i++) // 将当前组合保存到答案数组 ans 中
                ans[sum][i] = a[i];
        }
        return;
    }
    for (int i = 1; i <= 3; i++) { // 遍历配料可添加的质量范围 (1 ~ 3)
        if (y + i > n) // 如果添加当前质量的配料会导致总质量超过目标美味程度，则停止尝试
            break;
        a[x] = i; // 添加当前质量的配料
        search(x + 1, y + i); // 递归尝试下一种配料
        a[x] = 0; // 回溯
    }
}

int main() {
    cin >> n;
    search(1, 0); // 使用深搜寻找所有可能的配料组合
    cout << sum << endl;
    for (int i = 1; i <= sum; i++) {
        for (int j = 1; j <= 10; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
