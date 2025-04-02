#include <stdio.h>
#include <malloc.h>
typedef int ElemType;
typedef struct LNode  
{
	ElemType data;
	struct LNode *next;		//指向后继结点
} LinkNode;					//声明单链表结点类型


// 尾插法建立单链表
void CreateListR(LinkNode *&L, ElemType a[], int n)
{
	// 补充下面的代码
	LinkNode *s,*r;
	L=(LinkNode *)malloc(sizeof(LinkNode));  	//创建头结点
	L->next=NULL;
	r=L;					//r始终指向终端结点,开始时指向头结点
	for (int i=0;i<n;i++)
	{	
		s=(LinkNode *)malloc(sizeof(LinkNode));//创建新结点s
		s->data=a[i];
		r->next=s;			//将结点s插入结点r之后
		r=s;
	}
	r->next=NULL;			//终端结点next域置为NULL
}

void reverse(LinkNode*& L)
{
	// 请补充下面的代码
	L = L->next;
	LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
	s->next = NULL;
	while (L)
	{
		s->data = L->data;
		LinkNode *temp = L->next;
		L->next = s;
		s = L;
		L = temp;
	}
	L = s;
	// LinkNode *head = (LinkNode *)malloc(sizeof(LinkNode));
	// head->next = L;
	// L = head;
}

// 输出链表中的数据
void DispList(LinkNode *L)
{
	// 补充下面的代码
	LinkNode *p=L->next;  //跳过头节点
	while (p!=NULL)
	{	printf("%d ",p->data);
		p=p->next;
	}
	
}

int main()
{
	int i = 0, n;
	scanf("%d", &n);
	ElemType a[51];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	LinkNode *L;
	
	// 补充下面的代码
	CreateListR(L, a, n);
	
	reverse(L);
	
	// 补充下面的代码
	DispList(L);
	
	return 0;
}