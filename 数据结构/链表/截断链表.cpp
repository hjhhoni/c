# include <stdio.h>
# include <stdlib.h>
typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;
struct ListNode* cut_down_chongchong_link(struct ListNode* head) {
	int i = 0; //记录个数
    ListNode* temp = head;
    while (temp)
    {
        temp = temp->next;
        i++;
    }
    int k=0;
    while (k++<i/2)
    {
        head = head->next;
    }
    return head;
}
void output(ListNode* chongchong_link)
{
	printf("%d\n",chongchong_link->val);
    chongchong_link = chongchong_link->next;
    while (chongchong_link)
    {
        printf("%d ",chongchong_link->val);
        chongchong_link = chongchong_link->next;
    }
    
}
int main()
{
	int n;//链表长度
	scanf("%d",&n);
	ListNode* chongchong_link=(ListNode*)malloc(sizeof(ListNode));//开辟链表头部
	chongchong_link->next=NULL;
	ListNode* sta=chongchong_link;//新建这个指针指向头部
	for(int i=0;i<n;i++)
	{
		sta->next=(ListNode*)malloc(sizeof(ListNode));//先往后开辟一个结点的空间
		sta=sta->next;//sta往后挪一位
		scanf("%d",&sta->val);//即从第二个位置开始输入
	}
	sta->next=NULL;//输入完之后链表的最后一个元素指向空
	chongchong_link=chongchong_link->next;//头部往后移一个位才是有效位置
	chongchong_link=cut_down_chongchong_link((chongchong_link));//对链表进行截断
	output(chongchong_link);//传入输出函数
	return 0;
}