#include <iostream>
#include <vector>

using namespace std;
typedef char ElemType;
#define MAXSIZE 4
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



int main() {
    Queue* q;
    int f;
    InitQueue(q);  // ��ʼ������
    if (IsEmpty(q)) {    // �ж϶����Ƿ�Ϊ��
        cout << "����Ϊ��" << endl;
    }
    ElemType arr[] = { 'a', 'b', 'c' };
    for (int i = 0; i < 3; i++) {
        f = EnQueue(q, arr[i]);  // ���
        if (!f) cout << "��������" << endl;  // �ж��Ƿ���ӳɹ�
    }
    ElemType e;
    f = DeQueue(q, e);  // ����
    if (!f) cout << "����Ϊ��" << endl;  // �ж��Ƿ���ӳɹ�
    else cout << "����Ԫ��Ϊ: " << e << endl;
    ElemType arr2[] = { 'd', 'e', 'f' };
    for (int i = 0; i < 3; i++) {
        f = EnQueue(q, arr2[i]);  // ���
        if (!f) cout << "��������" << endl;  // �ж��Ƿ���ӳɹ�
    }
    cout << "���г�������: " << endl;
    while (DeQueue(q, e)) {  // ����
        cout << e << " ";
    }

    cout << endl;

    Delete(q);

}