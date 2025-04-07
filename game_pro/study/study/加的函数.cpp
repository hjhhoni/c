#include <iostream>
#include <vector>

using namespace std;
typedef char ElemType;
#define MAXSIZE 40
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
// 将十进制小数转换为二进制小数
void tentotwo(Queue * &q, double x) {
    int d = x; // 取整数部分
    x -= d;  // 保留x为小数部分
    if (d == 0) {
        EnQueue(q, '0');
    }
    else {
        while (d) {
            EnQueue(q, d % 2 + '0');
            d /= 2;
        }
    }

    EnQueue(q, '.'); // 小数点
    while (x) {
        x *= 2;
        int y = x;  // 取整数部分
   
        if (q->count == 10) {  // 保留8位小数
            break;
        }
        EnQueue(q, y+'0');
        if(x>=1) x -= y;
        
    }
}

void tentonbase(Queue*& q,double x, int base) {
    if (base < 2 || base > 36) {
        cout << "进制范围应在2到36之间" << endl;
        return;
    }
    // 字符集用于表示0-35这36个数字
    const char* charSet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int d = x; // 取整数部分
    x -= d;  // 保留x为小数部分
    if (d == 0) {
        EnQueue(q, '0');
    }
    else {
        // 将整数部分从后往前入队
        while (d) {
            EnQueue(q, charSet[d%base]);
            d /= base;
        }
    }

    EnQueue(q, '.'); // 小数点
    while (x && q->count < MAXSIZE) {
        x *= base;
        int y = x;  // 取整数部分
        EnQueue(q, charSet[y]);
        x -= y;
    }
}

int main() {

    ElemType e;

    cout << "请输入一个十进制小数: ";
    double x;cin >> x;  // 要转化的数字
    Queue* q2;
    InitQueue(q2);  // 初始化队列
    tentotwo(q2, x);  // 十进制小数转换为二进制小数
    cout << "二进制小数: " << endl;
    while (DeQueue(q2, e)) {  // 出队
        cout << e;
    }
    Delete(q2);
    cout << endl;
    cout << "请输入一个十进制小数及需要转化的进制: ";
    int N;cin >> x >> N;
    Queue* q3;
    InitQueue(q3);  // 初始化队列
    tentonbase(q3, x, N);
    cout <<N<< "进制小数: " << endl;
    while (DeQueue(q3, e)) {  // 出队
        cout << e;
    }

}