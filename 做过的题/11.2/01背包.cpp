#include <iostream>
using namespace std;
 
const int N = 1010;
 
int n, m, v[N], w[N], dp[N][N];
 
int main()
{
	cin >> m >> n;
 
	for (int i = 1; i <= n; ++i)cin >> v[i] >> w[i];
 
	// f[0][0~m] = 0; 考虑0件物品，总体积不超过0~m的最大价值
	// 由于此时一件物品都没有所以最大价值都0
	// 由于之前在前面已经在全局变量中初始化过，所以此处不用再初始化
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j]; // 不选择当前物品时的价值，直接继承上一个状态的价值
            // 如果当前背包容量可以放下当前物品，则尝试放入，更新最大价值
            if (j >= v[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
		}
	cout << dp[n][m] << endl;
 
	return 0;
}