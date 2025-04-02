# include <iostream>
# include <stdlib.h>
# include <string.h>
# define MaxSize 20
using namespace std;

typedef char ElemType;
typedef ElemType SqBTree[MaxSize+1];
typedef struct node    //定义数据类型
{	
	ElemType data;			// 数据元素
	struct node *lchild;	// 指向左孩子节点
	struct node *rchild;	// 指向右孩子节点
} BTNode;

BTNode* CreateBT1(char* pre, char* in, int n) {  //返回BTNode类型的指针的函数
    if (n == 0) return NULL; // 如果没有节点，返回NULL
    
    BTNode* root = new BTNode; // 创建新节点
    root->data = pre[0];        // 根节点为先序遍历的第一个元素

    // 在中序遍历中找到根节点的位置
    int rootIndex = 0;
    while (rootIndex < n && in[rootIndex] != root->data) {
        rootIndex++;
    }

    // 计算左子树和右子树的大小
    int leftSize = rootIndex; // 左子树的节点数
    int rightSize = n - rootIndex - 1; // 右子树的节点数，减的1是中间的根节点

    // 递归建立左子树和右子树
    // 第一个参数是为了从前序中定位左右子树位置
    // 第二个参数是为了把中序一分为二，变成两个以子树为根节点对应的中序遍历
    root->lchild = CreateBT1(pre + 1, in, leftSize); // 左子树（指针+1可以到下一位）
    root->rchild = CreateBT1(pre + 1 + leftSize, in + rootIndex + 1, rightSize); // 右子树，加1是越过根节点

    return root; // 返回创建的树根
}

void PostOrder(BTNode *b) { //递归遍历树
    if (b != NULL) {
        PostOrder(b->lchild);
        PostOrder(b->rchild);
        cout << b->data << ' ';
    }
}

int main() {
    SqBTree T1; // 新建一个字符数组，用于先序遍历
    SqBTree T2; // 新建一个字符数组，用于中序遍历

    cin >> T1;

    cin >> T2;

    int n = strlen(T1); // 获取节点数
    BTNode* root = CreateBT1(T1, T2, n); // 建立二叉树


    PostOrder(root); // 输出后序遍历结果
    cout << endl;

    // 注意：这里可以添加释放树的内存的逻辑，防止内存泄漏

    return 0;
}
