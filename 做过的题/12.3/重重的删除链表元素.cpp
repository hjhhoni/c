# include <stdio.h>
# include <stdlib.h>
typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;
// 结构体函数
struct ListNode* removeElements(struct ListNode* head, int val) {
	for(;head->val==val;) head = head->next; //去掉从头开始的一样的val
    ListNode* newlink=(ListNode*)malloc(sizeof(ListNode));//开辟链表头部
    newlink = head; //指向第一个
    head = head->next;
    ListNode* newhead=newlink;//开辟链表头部
    while (head!=NULL)
    {
        if(head->val!=val){
            newlink->next = head;
            newlink = newlink->next;
        }
        head = head->next;
    }
    newlink->next = NULL;
    return newhead;
}

void output(ListNode* chongchong_link)
{
	while(chongchong_link!=NULL)//
	{
		printf("%d ",chongchong_link->val);
		chongchong_link=chongchong_link->next;
	}
}

int main()
{
	int len,dval=0;//链表长度，删除值
	scanf("%d%d",&len,&dval);
	ListNode* chongchong_link=(ListNode*)malloc(sizeof(ListNode));//开辟链表头部
	chongchong_link->next=NULL;
	ListNode* sta=chongchong_link;//新建这个指针指向头部
	for(int i=0;i<len;i++)
	{
		sta->next=(ListNode*)malloc(sizeof(ListNode));//先往后开辟一个结点的空间
		sta=sta->next;//sta往后挪一位
		scanf("%d",&sta->val);//即从第二个位置开始输入
	}
	sta->next=NULL;//输入完之后链表的最后一个元素指向空
	chongchong_link=chongchong_link->next;//头部往后移一个位才是有效位置
	chongchong_link=removeElements((chongchong_link),dval);//对删除元素传参
	output(chongchong_link);//传入输出函数
	return 0;
}