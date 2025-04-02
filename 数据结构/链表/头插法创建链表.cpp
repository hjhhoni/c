#include <stdio.h>
#include <malloc.h>

typedef int ElemType;
typedef struct LNode  
{
    ElemType data;
    struct LNode *next;        // 指向后继结点
} LinkNode;                    // 声明单链表结点类型

// 头插法建立单链表
void CreateListF(LinkNode *&L, ElemType a[], int n)
{
    L = NULL; // 初始化链表为空
    for (int i = 0; i < n; i++)
    {
        LinkNode *newNode = (LinkNode *)malloc(sizeof(LinkNode)); // 创建新结点
        newNode->data = a[i]; // 将数据赋值给新结点
        newNode->next = L;    // 新结点指向当前链表的头结点
        L = newNode;          // 更新链表的头结点
    }
}

// 输出链表中的数据
void DispList(LinkNode *L)
{
    LinkNode *current = L; // 从头结点开始遍历链表
    while (current != NULL)
    {
        printf("%d ", current->data); // 输出当前结点的数据
        current = current->next; // 移动到下一个结点
    }
    printf("\n"); // 输出换行
}

int main()
{
    int i = 0, n;
    scanf("%d", &n);
    ElemType a[51];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    LinkNode *L;
    CreateListF(L, a, n); // 通过头插法创建链表
    
    DispList(L); // 输出链表中的数据
    
    return 0;
}
