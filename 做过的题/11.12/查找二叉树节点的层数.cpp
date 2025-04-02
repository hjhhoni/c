#include <iostream>

using namespace std;

#define MaxSize 1000

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
int Level(BTNode* b, ElemType x, int h)
{
    if(b==NULL) return 0;
	if((b->data)==x) return h;
    h++;
    int l,r;
    l=Level(b->lchild,x,h);
    r=Level(b->rchild,x,h);
    return l+r;
}
// 以下主函数用做调试
int main()
{
	BTNode *b;
	int x,h=1;
	char str[101]={0};
	cin >> str;
	cin >> x;
	
    CreateBTree(b,str);
    cout<<Level(b,x,h);

	return 0;
}