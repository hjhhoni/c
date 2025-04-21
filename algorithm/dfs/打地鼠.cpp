#include <iostream>
#include <vector>
#include <string>


// 思路 
// 题目像要用dfs的样子,穷举所有可能，所以我们可以标定一个地鼠状态值num，当num==0得到一个解，
// 为了避免无解，可规定初始长度len，若穷举结束len不变，则无解
// 一维数组时一个洞口的上：x+4,下：x-4,左：x-1，右：x+1 
// 测试：
// 1,2,4,8,9,10,11,14 EOF 10 2 4
// 7,8,10,11,14 EOF 11 15 12
// 2,3,4,7,9,11,12,13 EOF 9 7 8 6
// 1,3,4,5,6,7,10,11,12,13,15,16
// 1,3,7,8,9,13,14,16
// 1,2,3,4,8,10,11,12
using namespace std;
typedef long long ll;
vector<int> a(17);  // 地鼠板子，0为无地鼠，1为有地鼠
vector<int> vis(17);  // 标记数组
int num;		// 地鼠数
int d[4] = { 4,-4,1,-1 };  // 方位数组

int len = 1000;  // 答案的长度
vector<int> ans(21);  // 答案数组
vector<int> now(21);	// 当前层次dfs的局部过程中答案状态数组

void dfs(int step) {
	if (num == 0) {  // 有某个答案
		if (step < len) {// 更新最优答案
			for (int i = 1;i < step;i++) ans[i] = now[i];
			len = step - 1; // 更新最优长度
		}
		return;  // 回溯
	}
	if (step > len) return;  // 剪枝，若step大于答案长度，则没有继续下一层的必要了
	for (int x = 1;x <= 16;x++) {
		if (a[x] && vis[x] == 0) {  // 有地鼠且没敲过
			a[x] = 0;  // 去掉地鼠
			vis[x] = 1; // 标记敲过
			now[step] = x;
			num--;  // 去掉x占的num 
			for (int i = 0;i < 4;i++) {  // 变动周围 
				int tx = x + d[i];
				if (tx > 0 && tx < 17) {  // 在板子内
					if ((x % 4 == 1 && i != 3) || (x % 4 == 0 && i != 2) || (x % 4 != 1 && x % 4 != 0)) {   // 处理左右边界
						if (a[tx] == 1) {
							a[tx] = 0;  // 清空洞穴 
							num--;      // 地鼠减一 
						}
						else {
							num++;     // 地鼠加一 
							a[tx] = 1;
						}
					}
				}
			}
			dfs(step + 1);  // 进入下一层dfs
			a[x] = 1;  // 还原地鼠
			now[step] = 0;
			vis[x] = 0; // 还原标记
			num++;  // 加回x占的num 
			for (int i = 0;i < 4;i++) {  // 变动周围 
				int tx = x + d[i];
				if (tx > 0 && tx < 17) {  // 在板子内
					if ((x % 4 == 1 && i != 3) || (x % 4 == 0 && i != 2) || (x % 4 != 1 && x % 4 != 0)) {   // 处理左右边界
						if (a[tx] == 0) {
							a[tx] = 1;  // 还原洞穴 
							num++;      // 地鼠加一 
						}
						else {
							num--;     // 地鼠减一 
							a[tx] = 0;
						}
					}
				}
			}
		}
	}
	return;
}

void qiao(int x) {
	a[x] = 0;  // 去掉地鼠
	num--;
	for (int i = 0;i < 4;i++) {  // 变动周围 
		int tx = x + d[i];
		if (tx > 0 && tx < 17) {  // 在板子内
			if ((x % 4 == 1 && i != 3) || (x % 4 == 0 && i != 2) || (x % 4 != 1 && x % 4 != 0)) {   // 处理左右边界
				if (a[tx] == 1) {
					a[tx] = 0;  // 清空洞穴 
					num--;
				}
				else { 
					num++;
					a[tx] = 1;  // 出现地鼠
				}
			}
		}
	}
}
 
void dis() {  // 输出板子
	for (int i = 13;i >= 1;i -= 4) {
		for (int j = 0;j <= 3;j++) cout << a[j + i] << " "; 
		cout << endl;
	}
	cout << endl;
}

int main() {
	cout << "请输入地鼠位置：";  // 输入地鼠初始位置
	int n=1;
	string s;getline(cin, s);  // 整行读取测试样例
	string ss="";
	for (int i = 0;i < s.size();i++) {
		if (s[i] == ',') {  // 下一个数了，更新前一个数的地鼠
			a[stoi(ss)] = 1;  // 标记地鼠位置
			ss = "";
			n++;
			num++;  // 地鼠加一只
		}
		else ss += s[i];  // 积累数位
	}
	a[stoi(ss)] = 1;num++;
	cout << "输入模式（0为求解模式，1为游戏模式）";int m;cin >> m;cout << endl; // 输入模式
	if (m == 0) {
		dfs(1);
		if (len != 1000) {
			//for (int i = 1;i <= len;i++) cout << ans[i] << " ";  // 输出解答
			cout << "初始状态：" << endl;dis();

			for (int i = 1;i <= len;i++) {
				cout << "击打" << ans[i] << "号" << endl;
				qiao(ans[i]);  // 敲击ans[i]号
				dis();		// 输出板子状态
			}
		}
		else {
			cout << "无解" << endl;  // len不变，无解
		}
	}
	else {
		cout << "初始状态：" << endl;dis();
		while (num) {
			cout << "敲击号码：";cin >> n;   // 敲击ans[i]号
			cout << "击打" << n << "号" << endl;  // 输出板子状态
			qiao(n);
			dis();
		}
	}

}
