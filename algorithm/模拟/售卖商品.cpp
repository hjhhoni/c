// 题目描述：
// 你是一家自动售货机公司的运营管理员。售货机有\(N\)个商品槽，每个槽每天开始前会补货至最大容量\(C_{i}\)，补货单个商品的成本为\(K_{i}\)元，单个商品售价为\(P_{i}\)元。
// 每天会有\(M\)次购买请求，每次请求指定一个槽编号\(j\)，在该槽位购买1个商品。
// 请模拟\(D\)天的运营过程，计算总利润（总销售额 - 总补货成本）。一开始每个槽位中都没有商品。

// 输入描述:
// 第一行输入一个整数\(N\)，表示商品槽个数。
// 随后\(N\)行，每行输入三个整数\(C,K,P\)表示每个槽的容量、补货成本、商品售价。
// 接着输入一个整数\(D\)，表示运营天数。
// 随后\(D\)行，每行先输入一个整数\(M\)，表示当天的购买请求次数，随后输入\(M\)个整数\(j\)，表示指定的槽位。
// \((1\leq N,C,K,P,D \leq 100)\)
// \((K < P, 1\leq j \leq N, 1\leq M \leq \sum_{i = 1}^{n}C_{i})\)
// (保证只会选择还有剩余商品的槽位进行购买) 

// 输出描述:
// 输出一个整数，表示总利润。

// 示例1
// 输入
// ```
// 2
// 3 3 5
// 2 3 4
// 2
// 5 2 2 1 1 1
// 2 1 2
// ``` 

#include <iostream>
#include <vector>
using namespace std;
int n,D;
int B = 0; // 成本
int S = 0;// 销售额

typedef struct {
	int C, K, P;
}good;
int main() {
	cin >> n;
	good goods[101];
	for (int i = 1; i <= n; i++) {
		cin >> goods[i].C >> goods[i].K >> goods[i].P;
		B+=goods[i].C*goods[i].K;  // 第一天补货成本
	}
	cin >> D;
	while (D--) {
		int q;cin >> q;
		while (q--) {
			int id;cin >> id;
			S += goods[id].P;
			if(D)B += goods[id].K;  // 如果不是最后一天，补货
		}
	}
	cout << S-B << endl;
	return 0;
}