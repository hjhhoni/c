#include <iostream>

using namespace std;

#define MaxSize 100

typedef int ElemType;

typedef struct node 
{	
	ElemType data;			// 数据元素
	struct node *lchild;	// 指向左孩子节点
	struct node *rchild;	// 指向右孩子节点
} BTNode;

void CreateBTree(BTNode * &b, char *str)	// 创建二叉树
{
	// 请补充下面的代码
	BTNode* Stack[MaxSize],*p;
	int top=-1,k,j=0;
	char ch;
	b=NULL;
	ch=str[j];
	while(ch!=0)
	{
		switch (ch) {
		case '(':
			{
				top++;
				Stack[top]=p;
				k=1;
				break;
			}
		case ')':
			{
				top--;
				break;
			}
		case ',':
			{
				k=2;
				break;
			}
		default:
			{
				p=(BTNode*)malloc(sizeof(BTNode));
				p->data=ch-'0';
				p->lchild=p->rchild=NULL;
				if(b==NULL)
					b=p;
				else
				{
					switch (k) {
					case 1:
						{
							Stack[top]->lchild=p;
							break;
						}
					case 2:
						{
							Stack[top]->rchild=p;
							break;
						}
					}
				}
			}
		}
		j++;
		ch=str[j];
	}
}
bool hasPathSum(BTNode* root, int targetSum) {
	if(root==NULL||targetSum-(root->data)<0) return false;
    
    targetSum-=(root->data);
    if(targetSum==0) return true;
    
    if(hasPathSum(root->lchild,targetSum)||hasPathSum(root->rchild,targetSum))return true;
    else return false;
}

// 以下主函数用做调试
int main()
{
	BTNode *b;
	int val;
	char str[101];
	cin >> str;
	cin >> val;
	// 请补充下面的代码
	CreateBTree(b,str);
    cout<<hasPathSum(b,val);
	return 0;
}