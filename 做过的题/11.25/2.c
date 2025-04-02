#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
typedef struct Node {
    int val;
    struct Node* next;
} Node;

// 定义链表结构体
typedef struct MyLinkedList {
    Node* head;
    int size;
} MyLinkedList;

// 建立头结点
MyLinkedList* Jianjian_LinkedListCreate() {
    MyLinkedList* list = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    list->head = NULL;
    list->size = 0;
    return list;
}

// 在链表头部插入一个元素
void Jianjian_LinkedListAddAtHead(MyLinkedList* obj, int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = obj->head;
    obj->head = newNode;
    obj->size++;
}

// 在链表尾部插入一个元素
void Jianjian_LinkedListAddAtTail(MyLinkedList* obj, int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    if (obj->size == 0) {
        obj->head = newNode;
    } else {
        Node* current = obj->head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    obj->size++;
}

// 在index1位置插入一个元素index1_val
void Jianjian_LinkedListAddAtIndex(MyLinkedList* obj, int index1, int index1_val) {
    if (index1 > obj->size || index1 < 0) return;
    if (index1 == 0) {
        Jianjian_LinkedListAddAtHead(obj, index1_val);
        return;
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = index1_val;
    Node* current = obj->head;
    for (int i = 0; i < index1 - 1; i++) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    obj->size++;
}

// 删除链表index2位置元素
void Jianjian_LinkedListDeleteAtIndex(MyLinkedList* obj, int index2) {
    if (index2 >= obj->size || index2 < 0) return;
    if (index2 == 0) {
        Node* temp = obj->head;
        obj->head = obj->head->next;
        free(temp);
    } else {
        Node* current = obj->head;
        for (int i = 0; i < index2 - 1; i++) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
    obj->size--;
}

// 打印链表
void output(MyLinkedList* obj) {
    Node* current = obj->head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    MyLinkedList* list = Jianjian_LinkedListCreate();
    Jianjian_LinkedListAddAtHead(list, 1);
    Jianjian_LinkedListAddAtTail(list, 3);
    Jianjian_LinkedListAddAtIndex(list, 1, 2);  // 在索引1的位置插入2
    output(list);  // 输出: 1 -> 2 -> 3 -> NULL
    Jianjian_LinkedListDeleteAtIndex(list, 1);  // 删除索引1的位置
    output(list);  // 输出: 1 -> 3 -> NULL
    return 0;
}