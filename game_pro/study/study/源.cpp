#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;
int ans = -999999999;
int n, m;
int a[25][25];


int main()
{
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	// ÐÐÇ°×ººÍ
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			a[i][j] += a[i][j - 1];
		}
	}

	cout << ans << endl;

	return 0;
}