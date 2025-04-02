#include <iostream>
// & 是一个位运算符，表示按位与（AND）操作。按位与操作对两个二进制数的每一位进行比较，只有当两个对应的位都为1时，结果的对应位才为1，否则为0。
using namespace std;

int main() {
    int t;
    cin >> t; // 读取测试用例数

    while (t--) {
        long long n;
        cin >> n; // 读取每个整数

        // 计算补码中1的个数
        int count = 0;
        for (int i = 0; i < 64; ++i) {
            if (n & (1LL << i)) count++; // 检查每一位是否为1
        }
        // 1LL<<i会变成二进制1，10，100，1000，把n的每个位查找一遍并看看有几个1
        // 奇偶性判断
        int parity = count % 2;

        cout << parity << endl; // 输出结果
    }

    return 0;
}
