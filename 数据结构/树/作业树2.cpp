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
	if (Node == NULL) {
		cout << "^";
		return;
	}
	cout << Node->val;
	preorder(Node->ltree);  // 遍历左子树
	preorder(Node->rtree);  // 遍历右子树
}

void inorder(Tree* Node) {  // 中序遍历，左根右
	if (Node == NULL) {
		cout << "^";
		return;
	}
	preorder(Node->ltree);  // 遍历左子树
	cout << Node->val;
	preorder(Node->rtree);  // 遍历右子树
}

void lastorder(Tree* Node) {  // 后序遍历，左右根
	if (Node == NULL) {
		cout << "^";
		return;
	}
	preorder(Node->ltree);  // 遍历左子树
	preorder(Node->rtree);  // 遍历右子树
	cout << Node->val;
}

void disH(Tree* Node, int h) {  // 计算高度
	if (Node == NULL) {
		height = max(height, h);
		return;
	}
	disH(Node->ltree, h + 1);  // 遍历左子树
	disH(Node->rtree, h + 1);  // 遍历右子树
}

void aopreorder(Tree* Node,int depth) {  // 凹入法先序遍历，根左右
	if (Node == NULL)return;
	cout << Node->val;
	for (int i = 1;i <= height - depth+1;i++) cout << "=";
	if(height-1>=1)cout << endl;
	aopreorder(Node->ltree,depth+1);  // 遍历左子树
	aopreorder(Node->rtree,depth+1);  // 遍历右子树
}


void aoinorder(Tree* Node, int depth) {  // 凹入法中序遍历，左根右
	if (Node == NULL)return;
	aoinorder(Node->ltree, depth + 1);  // 遍历左子树
	cout << Node->val;
	for (int i = 1;i <= height - depth + 1;i++) cout << "=";
	if (height - 1 >= 1)cout << endl;
	aoinorder(Node->rtree, depth + 1);  // 遍历右子树
}

void aolastorder(Tree* Node, int depth) {  // 凹入法后序遍历，左右根
	if (Node == NULL)return;
	aolastorder(Node->ltree, depth + 1);  // 遍历左子树
	aolastorder(Node->rtree, depth + 1);  // 遍历右子树
	cout << Node->val;
	for (int i = 1;i <= height - depth + 1;i++) cout << "=";
	if (height - 1 >= 1)cout << endl;
}

void revtree(Tree* Node) {  // 反转二叉树
	if (Node == NULL)return;
	revtree(Node->ltree);  // 遍历左子树
	revtree(Node->rtree);  // 遍历右子树
	Tree* temp = Node->ltree;  // 反转前的暂存
	Node->ltree = Node->rtree;
	Node->rtree = temp;

}

void kuohaodis(Tree* Node) {  // 括号表示法遍历(前序)
	if (Node == NULL) return;
	cout << Node->val; // 树根
	if (Node->ltree != NULL || Node->rtree != NULL) cout << '(';  // 若有子树，则应该有括号
	kuohaodis(Node->ltree);  // 遍历左子树
	if (Node->ltree != NULL || Node->rtree != NULL) cout << ',';   // 若有子树，则应该有逗号
	kuohaodis(Node->rtree);  // 遍历右子树
	if (Node->ltree != NULL || Node->rtree != NULL) cout << ')';  // 若有子树，则应该有括号
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
	cout << "前序遍历：";preorder(T);cout << endl<<endl;					// 1.先序遍历输出该树（带“^"标志)
	cout << "中序遍历：";inorder(T);cout << endl << endl;				// 2.中序遍历输出该树（带“^"标志)
	cout << "后序遍历：";lastorder(T);cout << endl << endl;				// 3.后序遍历输出该树（带“^"标志)
	disH(T,0);
	cout << "先序凹入表表示法：" << endl;
	aopreorder(T,1);cout << endl;										// 4.先序凹入表表示法
	cout << "中序凹入表表示法：" << endl;
	aoinorder(T, 1);cout << endl;										// 5.中序凹入表表示法
	cout << "后序凹入表表示法：" << endl;
	aolastorder(T, 1);cout << endl;										// 6.后序凹入表表示法
	revtree(T);															// 7.反转二叉树
	cout << "反转二叉树的括号先序遍历："<<endl;kuohaodis(T);				// 8.括号表示法输出
	del(T);																// 9.销毁二叉树
	cout << endl;
	return 0;

}