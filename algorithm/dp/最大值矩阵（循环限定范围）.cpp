#include <iostream>
using namespace std;
int n,m,ans=-999999999;
int arr[25][25];
int prenum[25][25]; // 行前缀和
int dp[25]; // 动态规划数组dp表，代表列区间下的x行矩阵最大值


int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			prenum[i][j] = prenum[i][j-1] + arr[i][j]; // 计算行前缀和
		}
	}
	for (int begin = 1;begin <= m;begin++)
	{
		for (int end = begin;end <= m;end++)  // 双重循环限定列区间
		{
			for (int i = 1;i <= n;i++)
			{
				dp[i] = prenum[i][end] - prenum[i][begin-1]; // 计算列区间[begin,end]的end列的区间前缀和
			}
			for (int i = 1;i <= n;i++)
			{
				dp[i] = max(dp[i], dp[i - 1]+dp[i]);// 动态规划，计算区间[begin,end]列的i行矩阵最大值
				ans = max(ans, dp[i]); // 记录全局最大值
			}
		}
	}
	cout << ans << endl;
	return 0;
}

// 题目描述：
// 给定一个大小为
// n×m
// 的矩阵，求最大的子矩阵和。
// 输入描述:
// 第一行输入两个整数
// n
// ，
// m
// ，表示矩阵的大小。
// (1≤n,m≤20)
// 随后
// n
// 行，每行输入
// m
// 个数
// x
// ，表示矩阵的值。
// (−1000≤x≤1000)
// 输出描述:
// 输出一个整数，表示所有子矩阵中最大的矩阵和。
// 示例 1
// 输入
// plaintext
// 2 3
// 4 6 -2
// -6 8 3

// 输出
// plaintext
// 15