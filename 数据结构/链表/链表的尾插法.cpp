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
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next=nullptr;
	LinkNode *r=L;
	for(int i=0;i<n;i++){
	    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
	    s->data=a[i];
	    s->next = nullptr;
	    r->next=s;
	    r=s;
	}
}

// 输出链表中的数据
void DispList(LinkNode *L)
{
    // 补充下面的代码
    LinkNode *p=L->next;
    while(p!=nullptr){
        printf("%d ",p->data);
        p=p->next;
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
    CreateListR(L,a,n);
    
    // 补充下面的代码
    DispList(L);
    
    return 0;
}