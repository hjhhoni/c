#include <stdio.h>
#include <malloc.h>

typedef int ElemType;

typedef struct DNode		// 定义双链表结点类型
{
	ElemType data;
	struct DNode *prior;	// 指向前驱结点
	struct DNode *next;		// 指向后继结点
} DLinkNode;

// 尾插法建双链表
void CreateListR(DLinkNode *&L, ElemType a[], int n)
{
	DLinkNode *s,*r;
	L = (DLinkNode *)malloc(sizeof(DLinkNode));  	// 创建头结点
	L->prior = L->next = NULL;
	r = L;											// r始终指向终端结点,开始时指向头结点
	for (int i = 0; i < n; i++)
	{	
		s = (DLinkNode *)malloc(sizeof(DLinkNode));	// 创建新结点
		s->data = a[i];
		r->next = s;
		s->prior = r;								// 将结点s插入结点r之后
		r = s;
	}
	r->next = NULL;									// 尾结点next域置为NULL
}

// 在位置 i 插入值 e
bool ListInsert(DLinkNode *&L, int i, ElemType e)
{
	// 请补充下面的代码
    DLinkNode *newnode = (DLinkNode *)malloc(sizeof(DLinkNode));
    newnode->data = e;
    if(i==1){
        (L->next)->prior = newnode;
        newnode->next = L->next;
        L->next = newnode;
        newnode->prior = L;
    }else{
        i--;
        DLinkNode *p = (DLinkNode *)malloc(sizeof(DLinkNode));
        p = L->next;
        while (i!=1)
        {
            i--;
            if(p->next==NULL) return false;
            p = p->next;
        }
        newnode->next = p->next;
        (p->next)->prior = newnode;
        p->next = newnode;
        newnode->prior = p;
    }
	return true; 


}

// 输出双链表
void DispList(DLinkNode *L)
{
	DLinkNode *p = L->next;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}

int main()
{
	int i = 0, n, p, d;
	scanf("%d", &n);
	
	bool insertResult;
	
	ElemType a[51];
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
    scanf("%d %d", &p, &d);
	
	DLinkNode *L;
	
	// 补充下面的代码
	CreateListR(L, a, n);
	
	// 插入数据
	insertResult = ListInsert(L, p, d);
	
	// 补充下面的代码
	if(insertResult == true) {
		DispList(L);
	} else {
		puts("false");
	}	
	
	return 0;
}