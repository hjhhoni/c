#include <stdio.h>
#include <malloc.h>
typedef int ElemType;
typedef struct LNode  
{
	ElemType data;
	struct LNode *next;		//指向后继结点
} LinkNode;					//声明单链表结点类型

// 头插法建立单链表
void CreateListF(LinkNode *L, ElemType a[], int n)
{
	L = (LinkNode *)malloc(sizeof(LinkNode));
    LinkNode *r = (LinkNode *)malloc(sizeof(LinkNode));
    L->next = r;
    for(int i=n-1;i>=0;i--){
        LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
        r->data = a[i];
        r->next = p;
        r = p;
    }
	r = NULL;
}

// 输出链表中的数据
void DispList(LinkNode *L)
{
    // 补充下面的代码
    LinkNode *r;
    r = L->next;
    printf("11111");
    while (r!=NULL)
    {
        printf("%d ",r->data);
        r = r->next;
    }
}

int main()
{
    int i = 0, n, data;
    scanf("%d", &n);
    ElemType a[51];
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    LinkNode *L;
    // 补充下面的代码
    CreateListF(L,a,n);
    
    // 补充下面的代码
    DispList(L);
    
    return 0;
}