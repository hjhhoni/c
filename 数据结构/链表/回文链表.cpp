#include <stdio.h>
#include <malloc.h>
typedef int ElemType;
typedef struct LNode  
{
	ElemType data;
	struct LNode *next;		//指向后继结点
} LinkNode;					//声明单链表结点类型


// 尾插法建立单链表，头节点无效
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

bool isPalindrome(LinkNode* &L) {
	L = L->next; //跳过头节点
	int i = 0;
	LinkNode *s = L;
	while (s)
	{
		s = s->next;
		i++;
	}
	int arr[i+10];
	int j = 0;
	for(;j<i/2;){
		arr[j++] = L->data;
		L = L->next;
	}
	if((i/2)%2==1) L = L->next; //奇数时跳过中间节点
	j--;
	while (L)
	{
		// printf("%d %d\n",L->data,arr[j]);
		if(L->data!=arr[j--]) return 0;
		L = L->next;
	}
	// printf("%d",j);
	return 1;
	// return false;
}

// 输出链表中的数据

int main()
{
	int n=4;
	scanf("%d", &n);
	ElemType a[10000]={0};
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	LinkNode *L;
	
	// 补充下面的代码
	CreateListR(L, a, n);
	
	
	
	// 补充下面的代码
	// isPalindrome(L);
	printf("%d",isPalindrome(L));
	
	return 0;
}