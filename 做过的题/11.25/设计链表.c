#include <stdio.h>
#include <stdlib.h>

typedef struct MyLinkedList{
	int data;
    struct MyLinkedList *next;
} MyLinkedList;
//建立头结点
MyLinkedList* Jianjian_LinkedListCreate() {
    //填入你的代码
	MyLinkedList *head = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    head->data = 0;
    head->next = NULL;
    return head;
}
//在链表头部插入一个元素
void Jianjian_LinkedListAddAtHead(MyLinkedList* obj, int val) {
    //填入你的代码
	MyLinkedList *newnode = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    newnode->data = val;
    newnode->next = obj->next;
    obj->next = newnode;
    obj->data++;
}
//在链表尾部插入一个元素
void Jianjian_LinkedListAddAtTail(MyLinkedList* obj, int val) {
    //填入你的代码
	MyLinkedList *newnode = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    newnode->data = val;
    newnode->next = NULL;

    MyLinkedList *p = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    p = obj;
    while (p->next)
    {
        p = p->next;
    }
    p->next = newnode;
    obj->data++;
}
//在index1位置插入一个元素index1_val
void Jianjian_LinkedListAddAtIndex(MyLinkedList* obj, int index1, int index1_val) {
    //填入你的代码
    if(index1>obj->data) return;
    else if(index1==obj->data){
        Jianjian_LinkedListAddAtTail(obj,index1_val);
    }else{
        MyLinkedList *newnode = (MyLinkedList *)malloc(sizeof(MyLinkedList));
        newnode->data=index1_val;        
        if(index1==1){
            newnode->next = obj->next;
            obj->next = newnode;
        }else{
            // index1--;
            MyLinkedList *p = (MyLinkedList *)malloc(sizeof(MyLinkedList));
            p = obj->next;
            while (index1!=1)
            {
                p = p->next;
                index1--;
            }
            newnode->next = p->next;
            p->next = newnode;
        }
        obj->data++;
    }

    
}
//删除链表index2位置元素
void Jianjian_LinkedListDeleteAtIndex(MyLinkedList* obj, int index2) {
    //填入你的代码
	if(index2!=0&&index2<=obj->data){
        if(index2==1){
            obj->next = (obj->next)->next;
        }else{
            index2--;
            MyLinkedList *p = (MyLinkedList *)malloc(sizeof(MyLinkedList));
            p = obj->next;
            while (index2!=1)
            {
                p = p->next;
                index2--;
            }
            p->next = (p->next)->next;
        }
    }
}
//打印链表
void output(MyLinkedList* obj){
    //填入你的代码
    MyLinkedList *p = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    p = obj->next;
    while (p)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    
}
int main()
{
    int len;
    int head,tail,index1,index1_val,index2;
    //填入你的代码
    scanf("%d",&len);
    MyLinkedList *p = Jianjian_LinkedListCreate();
    for(int i=1;i<=len;i++){
        int val;
        scanf("%d",&val);
        Jianjian_LinkedListAddAtTail(p,val);
    }
    scanf("%d",&head);
    Jianjian_LinkedListAddAtHead(p,head);
    scanf("%d",&tail);
    Jianjian_LinkedListAddAtTail(p,tail);
    scanf("%d",&index1);
    scanf("%d",&index1_val);
    Jianjian_LinkedListAddAtIndex(p,index1,index1_val);
    scanf("%d",&index2);
    Jianjian_LinkedListDeleteAtIndex(p,index2);
    output(p);
    return 0;
}