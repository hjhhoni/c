#include <iostream>
using namespace std;
#define ll long long
typedef struct node {
    int val;
    node* next = NULL;                        // ��һ���ڵ����ÿգ����������������ж� 
} Node;
// ��������
void Insert(Node*& p, int x) {                  // ����ڵ� 
    if (p != NULL) Insert(p->next, x);       // ��ǰ�ڵ㲻�����һ���ڵ㣬�͵ݹ鵽��һ�� 
    else {                                   // ���ǿսڵ㣬�;�д��ֵ 
        p = new Node;
        p->val = x;
    }
    return;                                    // ���� 
}
// �������
void Dis(Node*& p) {                           // ����������нڵ�
    if (p != NULL) {                           // �ڵ㲻Ϊ�գ������ֵval; 
        cout << p->val << " ";
        Dis(p->next);                          // ������һ���ڵ� 
    }
    return;
}
// �������
void rDis(Node*& p) {                           // ����������нڵ�
    if (p != NULL) {                            // ��β�ڵ��ִ�� 
        rDis(p->next);                          // �ȵ���һ���ڵ� 
        cout << p->val << " ";                   // ��������һ���ڵ�������ǰ�ڵ��ֵ 
    }
    return;
}
// �鿴�����ڵ�
void DisNum(Node*& p, int count) {
    if (p == NULL) {                            // �ݹ���ʵ�β�ڵ��� 
        cout << count << endl;                   // ���ͳ�Ƶĸ��� 
        return;                                  // ��������һ��ݹ� 
    }
    DisNum(p->next, count + 1);       // ��β�ڵ������һ��ݹ� 
}
// ���ʵ�k���ڵ��ֵ
void Dis_k_val(Node*& p, int count, int k) {
    if (p == NULL) {
        cout << "��Ǹ���޷����ʵ�" << k << "���ڵ�" << endl;
        return;  // ���ݣ���ֹ����һ���ڵ�ݹ�
    }   // �����ڸýڵ� 
    if (count == k - 1) {                       // �����ڵ�k���ڵ� 
        cout << p->val << endl;                   // ����� 
        return;                                  // ���ݣ���ֹ����һ���ڵ�ݹ� 
    }
    Dis_k_val(p->next, count + 1, k);          // ��û����k���ڵ�,������һ���ڵ� 
}

// ��kλ����e
void Add_e_to_k(Node*& p, int count, int k, int e) {
    if (p == NULL) {
        cout << "��Ǹ���޷����ʵ�" << k << "���ڵ�" << endl;
        return;  // ���ݣ���ֹ����һ���ڵ�ݹ�
    }   // �����ڸýڵ� 
    if (count == k - 1) {                       // �����ڵ�k���ڵ� 
        Node* s = new Node;                     // �����½ڵ� 
        s->val = e;                             // ����e 
        s->next = p->next;                      // �����k���ڵ㵽�½ڵ�֮��
        p->next = s;                            // ��e���뵽��kλ��֮�� 
        return;                                  // ���ݣ���ֹ����һ���ڵ�ݹ� 
    }
    Add_e_to_k(p->next, count + 1, k, e);          // ��û����k���ڵ�,������һ���ڵ� 
}

// ɾ����k���ڵ�
Node* Del(Node*& p, int count, int k, Node*& f) {       // ����ɾ��ͷ�ڵ� ,�൱�ڲ�����ͷ�ڵ� 
    if (p == NULL) {
        cout << "��Ǹ���޷����ʵ�" << k << "���ڵ�" << endl;// �����ڸýڵ� 
        return f;                                  // �����p����ָ���һ���ڵ� 
    }
    if (k == 1) {                                   // ��ɾ����һ���ڵ� 
        Node* s = p->next;                          // ��¼�ڶ����ڵ�ĵ�ַ 
        delete p;                                   // ɾ����һ���ڵ� 
        return s;                                   // ���صڶ����ڵ��ַ 
    }
    if (count == k - 1) {                       // �����ڵ�k���ڵ� 
        Node* s = p->next;                      // ��¼��k�ڵ��ַ 
        p->next = p->next->next;  // ����k�ڵ��ǰ��ڵ� 
        delete s;  // ɾ��k�ڵ� 
        cout << "ɾ���ɹ�" << endl;
        return f;                                  // ���ݣ���ֹ����һ���ڵ�ݹ�,������ԭ��һ���ڵ�ĵ�ַ 
    }
    return Del(p->next, count + 1, k, f);          // ��û����k���ڵ�,������һ���ڵ� 
}

// ɾ����һ��Xֵ�Ľڵ�
Node* Del_val_X(Node* p, int x) {       // ɾ��ֵΪX�ĵ�һ�����ݽ��
    if (p == nullptr) return nullptr;   // ��Ϊ�գ����ؿ�ָ��
    if (p->val == x) {                  
        Node* temp = p;                 // ������temp�洢��ǰ�ڵ�
        p = p->next;                    // ɾ��
        delete temp;
        return p;                       // ������һ���ڵ�ָ��
    }
    p->next = Del_val_X(p->next, x);
    return p;
}
// ɾ��ֵΪX���������ݽ��
Node* Del_all_val_k(Node* p, int k) {               
    if (p == nullptr) return nullptr;             // ����ǰ�ڵ�Ϊ�գ�ֱ�ӷ��� NULL
    p->next = Del_all_val_k(p->next, k);           // �ݹ���� Del_all_val_k ��������ǰ�ڵ����һ���ڵ㣬ȷ������������ֵΪ k �Ľڵ㶼��ɾ��
    if (p->val == k) {                            // ����ǰ�ڵ��ֵΪ k��ɾ����ǰ�ڵ㲢������һ���ڵ�
        Node* temp = p;
        p = p->next;
        delete temp;
    }
    return p;  // ���ش����ĵ�ǰ�ڵ�
}

// 14. �������������ֵ
int findMax(Node* p) {
    if (p->next == nullptr) return p->val;
    int maxRest = findMax(p->next);
    return (p->val > maxRest) ? p->val : maxRest;
}

// 15. ������������Сֵ
int findMin(Node* p) {
    if (p->next == nullptr) return p->val;
    int minRest = findMin(p->next);
    return (p->val < minRest) ? p->val : minRest;
}

// 16. ����ֵΪX�����ݽ���ڵ�ǰ������ֵ�λ��
void findPos(Node* p, int x) {
    bool found = false;
    int pos = 1;
    while (p != nullptr) {
        if (p->val == x) {
            cout << "ֵΪ " << x << " �Ľڵ������λ�� " << pos << endl;
            found = true;
        }
        p = p->next;
        pos++;
    }
    if (!found) {
        cout << "û��ֵΪ " << x << " �Ľڵ�" << endl;
    }
}

// 17. ���ٸ�����
void destroyList(Node* p) {
    if (p == nullptr) return;
    destroyList(p->next);
    delete p;
}

int main() {

    int arr[] = { 13,15,8,4,8,3,4,8 };
    Node* p = NULL;                             // �ڵ��ÿ� 
    for (int i = 0; i < 8; i++) Insert(p, arr[i]);      // 1.�������� 
    cout << "���������"; Dis(p);                    // 2.����������нڵ�ֵ									
    cout << endl;
    cout << "���������"; rDis(p);                    // 3.����������нڵ�ֵ
    cout << endl;
    cout << "�ڵ������"; DisNum(p, 0);   // 4.��������������ݽ�����
    cout << "��������ʵڼ����ڵ㣺"; int k; cin >> k; // ����k 
    cout << "��" << k << "���ڵ��ǣ�"; Dis_k_val(p, 0, k); // 5.�����k���ڵ�
    cout << "�ڵ�k��λ�ò���e��"; int e; cin >> k >> e; // ����k��e 
    Add_e_to_k(p, 0, k, e);  // 6.�ڵ�k��λ���ϲ���eԪ�� 
    cout << "���������"; Dis(p);                    // 7.����������нڵ� 
    cout << endl;
    cout << "������ɾ���ڼ����ڵ㣺"; cin >> k;        // ����k 
    p = Del(p, 1, k, p);                           // 8.ɾ����k���ڵ� 
    cout << "���������"; Dis(p);                    // 9.����������нڵ�
    cout << endl;
    cout << "�������Ӧֵk��ɾ��valΪk�ĵ�һ���ڵ㣺"; cin >> k;        // ����k 
    p = Del_val_X(p, k);                          // 10.ɾ��valΪk�ĵ�һ���ڵ�
    cout << "���������"; Dis(p);                    // 11.����������нڵ�	
    cout << endl;

    cout << "������Ҫɾ��������ֵX��"; cin >> k;
    p = Del_all_val_k(p, k);                      // 12.ɾ������ֵΪX�����ݽ��
    cout << "���������"; Dis(p);                  // 13������������нڵ�ֵ
    cout << endl;

    if (p != nullptr) {
        cout << "��������ֵ�ǣ�" << findMax(p) << endl; // 14���������������ֵ
        cout << "�������Сֵ�ǣ�" << findMin(p) << endl; // 15��������������Сֵ
    }

    cout << "������Ҫ���ҵ�ֵX��"; cin >> k;
    findPos(p, k);                                      // 16.����ֵΪX�����ݽ���ڵ�ǰ������ֵ�λ��
    destroyList(p);                                     // 17.���ٸ�����
    p = nullptr;

    return 0;
}