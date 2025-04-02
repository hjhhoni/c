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
	L = (LinkNode *)malloc(sizeof(LinkNode));
    LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
    L->next = p;
    L->data = a[0];
    for(int i=0;i<n;i++){
        LinkNode *newnode = (LinkNode *)malloc(sizeof(LinkNode));
        newnode->data = a[i];
        L->data = L->data>a[i]?L->data:a[i];
        newnode->next = nullptr;
        p = newnode;
    }
}

// 输出链表中的数据
void DispList(LinkNode *L)
{
    // 补充下面的代码
    LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
    p = L->next; //跳过根节点
    while (p!=nullptr)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    

}

void DeleteMaxNode(LinkNode *&L)
{
	// 补充下面的代码
    LinkNode *p = (LinkNode *)malloc(sizeof(LinkNode));
    p = L->next; //跳过根节点
    while ((p->next)->data!=L->data)
    {
        p = p->next;
    }
    p->next = (p->next)->next;

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
    // 补充下面的代码 - 创建链表
    CreateListR(L, a, n);
    
    // 补充下面的代码 - 删除最大值节点
    // DeleteMaxNode(L);
    
    // 补充下面的代码 - 输出删除的链表
    DispList(L);
    
    return 0;
}