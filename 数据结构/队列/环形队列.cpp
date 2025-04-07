#include <iostream>
#include <vector>

using namespace std;
typedef char ElemType;
#define MAXSIZE 4
typedef struct {
    int front;    // 队头指针
    int count;    // 队列中元素个数
    ElemType data[MAXSIZE];  // 队列元素
}Queue;

void InitQueue(Queue*& q) {   // 初始化队列
    q = new Queue;
    q->front = 0;    // 队头指针指向队头元素
    q->count = 0;    // 队列中元素个数为0
}

bool IsEmpty(Queue* q) {  // 判断队列是否为空
    return q->count == 0;
}

bool IsFull(Queue* q) {   // 判断队列是否为满
    return q->count == MAXSIZE;
}

bool EnQueue(Queue* q, ElemType e) {  // 入队
    if (IsFull(q)) {                                // 队列满,返回false,停止入队
        return false;
    }
    q->data[(q->front + q->count) % MAXSIZE] = e;  // 队尾入队,逻辑上成环形
    q->count++;                                    // 队列中元素个数加1
}

bool DeQueue(Queue* q, ElemType& e) {  // 出队
    if (IsEmpty(q)) {                      // 队列为空,返回false,停止出队
        return false;
    }
    e = q->data[q->front];  // 队头出队
    q->front = (q->front + 1) % MAXSIZE;  // 队头指针后移,逻辑上成环形
    q->count--;            // 队列中元素个数减1
    return true;
}

void Delete(Queue*& q) {  // 删除队列
    delete q;
}



int main() {
    Queue* q;
    int f;
    InitQueue(q);  // 初始化队列
    if (IsEmpty(q)) {    // 判断队列是否为空
        cout << "队列为空" << endl;
    }
    ElemType arr[] = { 'a', 'b', 'c' };
    for (int i = 0; i < 3; i++) {
        f = EnQueue(q, arr[i]);  // 入队
        if (!f) cout << "队列已满" << endl;  // 判断是否入队成功
    }
    ElemType e;
    f = DeQueue(q, e);  // 出队
    if (!f) cout << "队列为空" << endl;  // 判断是否出队成功
    else cout << "出队元素为: " << e << endl;
    ElemType arr2[] = { 'd', 'e', 'f' };
    for (int i = 0; i < 3; i++) {
        f = EnQueue(q, arr2[i]);  // 入队
        if (!f) cout << "队列已满" << endl;  // 判断是否入队成功
    }
    cout << "队列出队序列: " << endl;
    while (DeQueue(q, e)) {  // 出队
        cout << e << " ";
    }

    cout << endl;

    Delete(q);  

}