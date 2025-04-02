#include <iostream>
#include <vector>

using namespace std;
typedef long long int;
int he(int x,int n)
{
	return -(n*(x-n+1 + x) / 2);  // 等差数列前n项和公式：个数x（首元素+尾元素）/2
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n + 1);
	for (int i = 1;i <= n;i++) cin >> arr[i];
	int q;cin >> q;
	// 前缀和
	for (int i = 1;i <= n;i++) arr[i] += arr[i - 1];
	vector<int> ans;
	int l, u;
	while (q--)
	{
		cin >> l >> u;
		int r = l; // r代表第r条跑道，得看看整条跑道是正贡献还是负贡献
		for (;r+1 <= n;r++)
		{
			int k = u - (arr[r+1] - arr[l - 1]) + 1; //先看下跑道是否可以跑(该跑道的最后一段的贡献k)
			if (k <= 0 && he(arr[r + 1] - arr[l - 1], arr[r+1] - arr[r]) + (u + 1) * (arr[r+1] - arr[r]) <= 0) break;
			
		}
		ans.push_back(r);
	}
	for (auto i : ans) cout << i << " ";
}
