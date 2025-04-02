#include <iostream>
#include <cmath>
using namespace std;
int ans = 0;
int main()
{
	int n;
	cin >> n;
	while (n != 1) {
		int s = (int)sqrt(n);
		if (s * s == n)
		{
			ans++;
			n = s;
		}
		else {
			ans += n - s * s;
			n = s*s;
		}
	}
	cout << ans << endl;
}

// 题目描述：
// 阿伟有一个初始值为1的数，他想将这个数变为\(x\)。
// 阿伟每次可以从以下两种操作中选择一种执行：
// 1. 将这个数 +1
// 2. 将这个数平方
// 请问阿伟最少需要多少次操作才能将这个数变为\(x\)？

// 输入描述:
// 输入一个整数\(x\)，表示目标数。\((1 \leq x \leq 10^{9})\)

// 输出描述:
// 输出一个整数，表示变成目标数所需的最少操作次数。

// 示例1
// 输入
// ```
// 9
// ```
// 输出
// ```
// 3
// ``` 