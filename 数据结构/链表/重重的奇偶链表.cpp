# include <stdio.h>
# include <stdlib.h>
typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;
struct ListNode* oddEvenList(struct ListNode* head) {
	ListNode *ji = (ListNode*)malloc(sizeof(ListNode));
    ListNode *tou = ji;
    ListNode *ou = (ListNode*)malloc(sizeof(ListNode));
    ListNode *wei = ou;
    int m = 1;
    while (head)
    {
        if (m==1)
        {
            ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val = head->val;
            temp->next = NULL;
            ji->next = temp;
            ji = ji->next;
            m=2;
        }else
        {
            ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
            temp->val = head->val;
            temp->next = NULL;
            ou->next = temp;
            ou = ou->next;
            m=1;
        } 
        head = head->next;
    }
    ji->next = wei->next;  //NULL跳过ou的头节点链接ou
    tou = tou->next; //头部往后移一个位才是有效位置
    return tou;
}
void output(ListNode* chongchong_link)
{
	while (chongchong_link)
    {
        printf("%d ",chongchong_link->val);
        chongchong_link = chongchong_link->next;
    }
}
int main()
{
    //主函数和调用函数已经在这里配置好了（只需要填入函数即可）！！！！
    
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
	chongchong_link=oddEvenList((chongchong_link));//对链表进行奇偶排序
	output(chongchong_link);//传入输出函数
	return 0;
}