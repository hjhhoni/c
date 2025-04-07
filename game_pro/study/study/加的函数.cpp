#include <iostream>
#include <vector>

using namespace std;
typedef char ElemType;
#define MAXSIZE 40
typedef struct {
    int front;    // ��ͷָ��
    int count;    // ������Ԫ�ظ���
    ElemType data[MAXSIZE];  // ����Ԫ��
}Queue;

void InitQueue(Queue*& q) {   // ��ʼ������
    q = new Queue;
    q->front = 0;    // ��ͷָ��ָ���ͷԪ��
    q->count = 0;    // ������Ԫ�ظ���Ϊ0
}

bool IsEmpty(Queue* q) {  // �ж϶����Ƿ�Ϊ��
    return q->count == 0;
}

bool IsFull(Queue* q) {   // �ж϶����Ƿ�Ϊ��
    return q->count == MAXSIZE;
}

bool EnQueue(Queue* q, ElemType e) {  // ���
    if (IsFull(q)) {                                // ������,����false,ֹͣ���
        return false;
    }
    q->data[(q->front + q->count) % MAXSIZE] = e;  // ��β���,�߼��ϳɻ���
    q->count++;                                    // ������Ԫ�ظ�����1
}

bool DeQueue(Queue* q, ElemType& e) {  // ����
    if (IsEmpty(q)) {                      // ����Ϊ��,����false,ֹͣ����
        return false;
    }
    e = q->data[q->front];  // ��ͷ����
    q->front = (q->front + 1) % MAXSIZE;  // ��ͷָ�����,�߼��ϳɻ���
    q->count--;            // ������Ԫ�ظ�����1
    return true;
}

void Delete(Queue*& q) {  // ɾ������
    delete q;
}
// ��ʮ����С��ת��Ϊ������С��
void tentotwo(Queue * &q, double x) {
    int d = x; // ȡ��������
    x -= d;  // ����xΪС������
    if (d == 0) {
        EnQueue(q, '0');
    }
    else {
        while (d) {
            EnQueue(q, d % 2 + '0');
            d /= 2;
        }
    }

    EnQueue(q, '.'); // С����
    while (x) {
        x *= 2;
        int y = x;  // ȡ��������
   
        if (q->count == 10) {  // ����8λС��
            break;
        }
        EnQueue(q, y+'0');
        if(x>=1) x -= y;
        
    }
}

void tentonbase(Queue*& q,double x, int base) {
    if (base < 2 || base > 36) {
        cout << "���Ʒ�ΧӦ��2��36֮��" << endl;
        return;
    }
    // �ַ������ڱ�ʾ0-35��36������
    const char* charSet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int d = x; // ȡ��������
    x -= d;  // ����xΪС������
    if (d == 0) {
        EnQueue(q, '0');
    }
    else {
        // ���������ִӺ���ǰ���
        while (d) {
            EnQueue(q, charSet[d%base]);
            d /= base;
        }
    }

    EnQueue(q, '.'); // С����
    while (x && q->count < MAXSIZE) {
        x *= base;
        int y = x;  // ȡ��������
        EnQueue(q, charSet[y]);
        x -= y;
    }
}

int main() {

    ElemType e;

    cout << "������һ��ʮ����С��: ";
    double x;cin >> x;  // Ҫת��������
    Queue* q2;
    InitQueue(q2);  // ��ʼ������
    tentotwo(q2, x);  // ʮ����С��ת��Ϊ������С��
    cout << "������С��: " << endl;
    while (DeQueue(q2, e)) {  // ����
        cout << e;
    }
    Delete(q2);
    cout << endl;
    cout << "������һ��ʮ����С������Ҫת���Ľ���: ";
    int N;cin >> x >> N;
    Queue* q3;
    InitQueue(q3);  // ��ʼ������
    tentonbase(q3, x, N);
    cout <<N<< "����С��: " << endl;
    while (DeQueue(q3, e)) {  // ����
        cout << e;
    }

}