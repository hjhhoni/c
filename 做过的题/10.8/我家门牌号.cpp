#include <iostream>
using namespace std;

int n; // n：目标数

// 计算1到n的和
int sumTo(int n) {
    return n * (n + 1) / 2; // 公式法计算从1到n的和
}

int main() {
    cin >> n;
    
    for (int i = 1; ; i++) { // i为逐步增加的自然数
        int sum = sumTo(i); // 计算1到i的和
        // 计算 j 的最大值
        int j = (sum - n) / 3; // 通过公式推导j的值

        // 判定 j 是否有效
        if (j > 0 && (sum - 3 * j) == n) {
            cout << j << " " << i;
            return 0; // 找到结果，返回
        }
    }
    
    return 0;
}
