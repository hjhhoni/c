vector<int> nums;
int m = matrix.size();
int n = matrix[0].size();

int i = 0;	// i 是 x + y 的和
while (i < m + n)
{
	// 第 1 3 5 ... 趟
	int x1 = (i < m) ? i : m - 1;	// 确定 x y 的初始值，:前面的为真
	int y1 = i - x1;
	while (x1 >= 0 && y1 < n)
	{
		nums.push_back(matrix[x1][y1]);
		x1--;
		y1++;
	}
	i++;

	if (i >= m + n) break;
	// 第 2 4 6 ... 趟
	int y2 = (i < n) ? i : n - 1;	// 确定 x y 的初始值
	int x2 = i - y2;
	while (y2 >= 0 && x2 < m)
	{
		nums.push_back(matrix[x2][y2]);
		x2++;
		y2--;
	}
	i++;
}
return nums;
