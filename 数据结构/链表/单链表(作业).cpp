#include <iostream>
#include <cstdio>
using namespace std;
typedef char ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LinkNode;
//1.初始化
void InitList(LinkNode*& L)
{
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
}
//2.尾插法
void CreateListR(LinkNode*& L, ElemType a[], int n)
{
	LinkNode* s, * r;
	r = L;
	for (int i = 0; i < n; i++)
	{
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}
// 输出单链表
void DispList(LinkNode* L)
{
	LinkNode* p = L->next;
	while (p != NULL)
	{
		printf("%c ", p->data);
		p = p->next;
	}
	printf("\n");
}
// 输出单链表长度
int ListLength(LinkNode* L)
{
	int n = 0;
	LinkNode* p = L;
	while (p->next != NULL)
	{
		n++; p = p->next;
	}
	return n;
}
// 判断是否为空
bool ListEmpty(LinkNode* L)
{
	return(L->next == NULL);
}
// 输出单链表第n个元素
bool GetElem(LinkNode* L, int i, ElemType& e)
{
	int j = 0;
	LinkNode* p = L;
	if (i < 0) return false;
	while (j < i && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		e = p->data;
		return true;
	}
}
// 按元素值找位置
int LocateElem(LinkNode* L, ElemType e)
{
	int i = 1;
	LinkNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
		i++;
	}
	if (p == NULL) return 0;
	else return i;
}
// 在第i个元素的位置插入元素
bool ListInsert(LinkNode*& L, int i, ElemType e)
{
	int j = 0;
	LinkNode* p = L, * s;
	if (i <= 0) return false;
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)return false;
	else {
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = e;
		s->next = s;
		return true;
	}
}
// 删除第i个元素
bool ListDelete(LinkNode*& L, int i, ElemType& e)
{
	int j = 0;
	LinkNode* p = L, * q;
	if (i < 0) return false;
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)	return false;
	else {
		q = p->next;
		if (q == NULL)return false;
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}
// 释放单链表
void DestroyList(LinkNode*& L)
{
	LinkNode* pre = L, * p = L->next;
	while (p!=NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
	printf("单链表已释放");
}

int main() {
	LinkNode* L;
	InitList(L); //初始化
	char a[] = "abcde";
	CreateListR(L, a, 5); //尾插法插入
	printf("输出单链表：");
	DispList(L); //输出单链表 
	printf("列表长度是：%d\n",ListLength(L)); // 输出长度
	if (ListEmpty(L))printf("列表为空");  // 判断列表是否为空
	else printf("列表不为空");
	printf("\n");
	char e; int i;
	printf("您想输出单链表第几个元素："); scanf("%d", &i);
	if(GetElem(L, i, e))
		printf("单链表第%d个元素是%c", i, e);
	else
		printf("元素不存在");
	printf("\n");
	printf("您想查询哪个元素的位置："); scanf("%c", &e);
	if(LocateElem(L,e)) 
		printf("元素%c在%i位置", e, i);
	else
		printf("元素不存在");
	printf("\n");
	printf("您想在第几个位置插入什么元素："); scanf("%d %c", &i,&e);
	if(ListInsert(L,i,e))
		printf("元素插入成功");
	else
		printf("元素插入失败");
	printf("\n");
	printf("输出单链表："); 
	DispList(L);
	printf("您想删除第几个元素："); scanf("%d", &i);
	if(ListDelete(L,i,e))
		printf("成功删除元素%c", e);
	else
		printf("元素删除失败");
	printf("\n");
	printf("输出单链表：");
	DispList(L);
	DestroyList(L);
	return 0;

}

