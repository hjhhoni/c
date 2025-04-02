#include <iostream>
#include <stdlib.h>
#include <string.h>
#define MaxSize 30
using namespace std;

typedef char ElemType;
typedef ElemType SqBTree[MaxSize + 1];

typedef struct node 
{
    ElemType data;           // 数据元素
    struct node *lchild;     // 指向左孩子节点
    struct node *rchild;     // 指向右孩子节点
} BTNode;

// 创建二叉树 (后序遍历和中序遍历)
BTNode* CreateBT2(char* post, char* in, int n)
{
    if (n == 0) return NULL; // 基本情况

    // 后序遍历的最后一个元素是根节点
    BTNode* root = new BTNode;
    root->data = post[n - 1];

    // 找到根节点在中序遍历中的位置
    char* rootPos = strchr(in, root->data); //返回字符串中第一个出现该字符发位置指针
    int leftSize = rootPos - in; // 左子树的节点数（指针相减为指针之间存储某一数据类型的数量）
    int rightSize = n - 1 - leftSize; // 右子树的节点数

    // 递归构造左子树和右子树
    root->lchild = CreateBT2(post, in, leftSize);
    root->rchild = CreateBT2(post + leftSize, rootPos + 1, rightSize);

    return root;
}

void PreOrder(BTNode *b)
{
    if (b != NULL)
    {
        cout << b->data << ' '; // 输出根节点
        PreOrder(b->lchild);    // 先递归输出左子树
        PreOrder(b->rchild);    // 再递归输出右子树
    }
}

int main()
{
    SqBTree T1; // 后序遍历的数组
    SqBTree T2; // 中序遍历的数组

    cin >> T1;    
    cin >> T2;

    // 前序遍历输出
    PreOrder(CreateBT2(T1, T2, strlen(T1)));
    cout << endl;

    return 0;
}
