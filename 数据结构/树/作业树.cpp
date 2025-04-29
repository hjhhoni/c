#include <iostream>
#include <vector>
using namespace std;

// p201测试数据
// pre: ABDGCEF   根左右
// in:  DGBAECF	  左根右
// p243测试数据
// pre: ABDEHJKLMNCFGI
// in:  DBJHLKMNEAFCGI
typedef char ElementType;
typedef struct node {
	char val;
	node* rtree;
	node* ltree;
}Tree;

int height,sum,wide;

Tree* creatTree(string pre, string in, int length) {   // 由前序中序构建成树
	if (length == 0) return NULL;  // 空树
	Tree* tree = new Tree;    // 构建树节点
	ElementType root = pre[0];
	tree->val = pre[0];   //   节点值存取
	int index = 0;  // 该节点在中序中的位置
	for (;index < length&&in[index] != root;index++);   // 找到root在中序的位置
	int leftsize = index;   // 左子树中序的长度
	int rightsize = length - index - 1;  // 右子树中序长度，-1是因为index从0开始

	if (leftsize == 0) tree->ltree = NULL;
	else tree->ltree = creatTree(pre.substr(1, leftsize), in.substr(0, leftsize), leftsize);  // 构建左子树
	if (rightsize == 0) tree->rtree = NULL;
	else tree->rtree = creatTree(pre.substr(leftsize+1,rightsize), in.substr(index+1,rightsize), rightsize);  // 构建右子树
	return tree;
}

void preorder(Tree* Node) {  // 前序遍历，根左右
	if (Node == NULL) return;
	cout << Node->val;
	preorder(Node->ltree);  // 遍历左子树
	preorder(Node->rtree);  // 遍历右子树
}

void kuohaodis(Tree* Node) {  // 括号表示法遍历(前序)
	if (Node == NULL) return;
	cout << Node->val; // 树根
	if (Node->ltree != NULL || Node->rtree != NULL) cout << '(';  // 若有子树，则应该有括号
	kuohaodis(Node->ltree);  // 遍历左子树
	if(Node->ltree != NULL || Node->rtree != NULL) cout << ',';   // 若有子树，则应该有逗号
	kuohaodis(Node->rtree);  // 遍历右子树
	if (Node->ltree != NULL || Node->rtree != NULL) cout << ')';  // 若有子树，则应该有括号
}

int find_kids(Tree* Node,ElementType e) {  // 查找子树
	if (Node == NULL) return 0;
	if (Node->val == e) {
		if (Node->ltree != NULL) cout << "左子树：" << (Node->ltree)->val << ",";
		else cout << "无左子树,";
		if (Node->rtree != NULL) cout << "右子树：" << (Node->rtree)->val << endl;
		else cout << "无右子树" << endl;
		return 1;  // 存在节点
 	}
	int a = find_kids(Node->ltree,e);  // 遍历左子树
	int b = find_kids(Node->rtree,e);  // 遍历右子树
	return max(a, b);
}

void disH(Tree* Node, int h) {  // 计算高度
	if (Node == NULL) {
		height = max(height, h);
		return;
	}
	disH(Node->ltree,h+1);  // 遍历左子树
	disH(Node->rtree,h+1);  // 遍历右子树
}
int cnt(Tree* Node) {   // 计算节点数
	if (Node == NULL) return 0;
	int x = 1;
	x+=cnt(Node->ltree);  // 遍历左子树
	x+=cnt(Node->rtree);  // 遍历右子树
	return x;
}

int twocnt(Tree* Node) {  // 计算双分支节点
	if (Node == NULL) return 0;
	int x = 1;
	x += twocnt(Node->ltree);  // 遍历左子树
	x += twocnt(Node->rtree);  // 遍历右子树
	if (Node->ltree == NULL || Node->rtree == NULL) return 0;  // 子树缺一不可
	return x;
}

int no_kid_cnt(Tree* Node) {   // 计算叶子节点
	if (Node == NULL) return 0;
	int x = 0;
	x += no_kid_cnt(Node->ltree);  // 遍历左子树
	x += no_kid_cnt(Node->rtree);  // 遍历右子树
	if (Node->ltree == NULL && Node->rtree == NULL) return 1;  // 子树存一不可
	else return x;
}

void find_max_wide(Tree* Node,vector<int>&wide_map,int depth) {   // 找到宽度
	if (Node == NULL) return;
	wide_map[depth]++;  // 该depth下的宽度加一
	find_max_wide(Node->ltree,wide_map,depth+1); // 遍历左子树
	find_max_wide(Node->rtree, wide_map, depth + 1);  // 遍历右子树
}

void del(Tree* Node) {  // 销毁二叉树
	if (Node == NULL) return;
	del(Node->ltree);  // 遍历左子树
	del(Node->rtree);  // 遍历右子树
	delete Node;
}

int main() {
	string pre, in;
	cout << "请输入前序遍历：";cin >> pre;
	cout << "请输入中序遍历：";cin >> in;
	Tree* T = creatTree(pre, in, pre.size());
	//preorder(T);
	kuohaodis(T);											// 1.括号表示法输出
	cout << endl;
	cout << "查询对应值的左右节点值：";ElementType e;cin >> e;  // 2.查询对应值的左右节点值
	int f = find_kids(T, e);if (f == 0) cout << "该节点不存在" << endl;
	disH(T, 0);cout <<"高度：" << height << endl;			// 3.输出二叉树高度
	cout <<"节点个数：" << cnt(T) << endl;					// 4.输出节点个数
	cout << "双分支节点个数：" << twocnt(T) << endl;			 // 5.输出双分支节点个数
	cout << "单分支节点个数：" << cnt(T)-twocnt(T) << endl;   // 6.输出单分支节点个数
	cout << "叶子节点个数：" << no_kid_cnt(T) << endl;		// 7.输出叶子节点个数
	vector<int> wide_map(height+1,0);  // 记录不同高度层的节点数
	find_max_wide(T,wide_map,1);
	for (int i = 1;i <= height;i++) {
		wide = max(wide, wide_map[i]);
	}
	cout << "二叉树宽度：" << wide << endl;					// 8.输出二叉树宽度
	del(T);                                                 // 9.销毁二叉树

}