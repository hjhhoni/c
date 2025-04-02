#include <iostream>
using namespace std;

typedef long long ll;

ll rangeBitwiseAnd(int left, int right) {
    ll result = 0; // 最终结果
    int shift = 0; // 位移

    // 找到 left 和 right 的共同前缀
    while (left < right) {
        left >>= 1;
        right >>= 1;
        shift++;
    }

    return left << shift; // 左移回去，恢复共同前缀部分
}

int main() {
    int t,l,r;
    ll sum=0;
    cin>>t;
    while (t--)
    {
        cin >> l >> r;
        ll result = rangeBitwiseAnd(l, r);
        sum+=result;
    }
    cout<<sum;
    return 0;
}
// 假设你有 left = 12（二进制为 1100）和 right = 15（二进制为 1111）：

// 第一次循环后：left = 6（0110），right = 7（0111），shift = 1
// 第二次循环后：left = 3（0011），right = 3（0011），shift = 2（停止循环）
// 此时 left 和 right 都是 3，它们共同的前缀是 00，然后左移 2 位，得到 12，即 1100。

// 最终的结果就是 12，这就是 12 和 15 之间所有数字的按位与。整体上，这段代码有效地计算了一个范围内所有数的按位与的结果。