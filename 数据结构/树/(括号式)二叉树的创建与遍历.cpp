#include <iostream>
#include <cstring>
using namespace std;

#define MaxSize 100

typedef char ElemType;

typedef struct node 
{	
	ElemType data;			// 数据元素
	struct node *lchild;	// 指向左孩子节点
	struct node *rchild;	// 指向右孩子节点
} BTNode;

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

// 先序遍历的递归算法
void PreOrder(BTNode *b)
{
	// 请补充下面的代码
    if(b!=nullptr){
        cout<<b->data<<" ";
        PreOrder(b->lchild);
        PreOrder(b->rchild);
    }
}

// 中序遍历的递归算法
void InOrder(BTNode *b) {
    if (b != nullptr) { // 检查指针是否为 NULL
        InOrder(b->lchild);
        cout << b->data << " ";
        InOrder(b->rchild);
    }
}

// 后序遍历的递归算法
void PostOrder(BTNode *b) {
    if (b != nullptr) { // 检查指针是否为 NULL
        PostOrder(b->lchild);
        PostOrder(b->rchild);
        cout << b->data << " "; // 在访问左右子树之后输出根节点
    }
}

// 以下主函数用做调试
int main()
{
	BTNode *b=nullptr;
	char str[101]={'\0'};
	cin >> str;
    b=new BTNode;  //先建立一个空树
	CreateBTree(b,str);
    PreOrder(b);
    cout << endl;
    InOrder(b);
    cout << endl;
    PostOrder(b);
	
	return 0;
}