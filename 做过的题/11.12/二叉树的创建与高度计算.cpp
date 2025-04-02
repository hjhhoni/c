#include <iostream>

using namespace std;

#define MaxSize 100

typedef char ElemType;

typedef struct node {
    ElemType data;           // 数据元素
    struct node *lchild;    // 指向左孩子节点
    struct node *rchild;    // 指向右孩子节点
} BTNode;

// 基于括号表达式创建二叉树
void CreateBTree(BTNode * &b, char *str)	// 创建二叉树，取地址符内部调用的参数会影响外部
{
    b->data=str[0];  //根节点
    BTNode *ltree=new BTNode;
    BTNode *rtree=new BTNode;
    int l=0,r=0;
    if(str[1]=='('){  //有子树
        if(str[2]>='A'&&str[2]<='Z') { //有左子树
            l=2;
            b->lchild=ltree;
            r=l+1;
            if(str[r]!='('){ //左子树没子树
                r+=1;
                if(str[r]>='A'&&str[r]<='Z'){ //有右子树
                    b->rchild=rtree;
                }else //无右子树
                {
                    r=0;
                    b->rchild=nullptr;
                }
            }
            else if(str[r]=='('){  //左子树有子树
                int count=1;
                while (count!=0)
                {
                    r++;
                    if(str[r]=='(') count++;
                    else if(str[r]==')') count--;
                }
                r+=2; //找到右子树（如果存在的话）
                if(str[r]>='A'&&str[r]<='Z'){ //有右子树
                    b->rchild=rtree;
                }else //无右子树
                {
                    r=0;
                    b->rchild=nullptr;
                }
            }            
        }else{  //无左子树
            l=0;
            b->lchild=nullptr;
            r=3;
            b->rchild=rtree;
        }

        if(l!=0) CreateBTree(ltree,str+l);
        if(r!=0) CreateBTree(rtree,str+r);
    }else
    {
        b->lchild=nullptr;
        b->rchild=nullptr;
    }
}

// 求二叉树的高度
int BTHeight(BTNode *b) {
    if (b == nullptr) {
        return 0; // 如果为空树，高度为0
    }
    int leftHeight = BTHeight(b->lchild); // 计算左子树高度
    int rightHeight = BTHeight(b->rchild); // 计算右子树高度
    return max(leftHeight, rightHeight) + 1; // 返回树的高度
}


// 以下主函数用做调试
int main() {
    BTNode *b;
    char str[101];
    cin >> str;

    CreateBTree(b, str); // 调用创建二叉树函数

    int height = BTHeight(b); // 计算二叉树高度
    cout << height << endl; // 输出高度

    return 0;
}
