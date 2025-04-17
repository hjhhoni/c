#include <iostream>
using namespace std;
#define ll long long
typedef struct node {
    int val;
    node* next = NULL;                        // 下一个节点先置空，方便其它函数的判断 
} Node;
// 插入数据
void Insert(Node*& p, int x) {                  // 插入节点 
    if (p != NULL) Insert(p->next, x);       // 当前节点不是最后一个节点，就递归到下一个 
    else {                                   // 若是空节点，就就写入值 
        p = new Node;
        p->val = x;
    }
    return;                                    // 回溯 
}
// 正向输出
void Dis(Node*& p) {                           // 正向输出所有节点
    if (p != NULL) {                           // 节点不为空，就输出值val; 
        cout << p->val << " ";
        Dis(p->next);                          // 访问下一个节点 
    }
    return;
}
// 逆向输出
void rDis(Node*& p) {                           // 逆向输出所有节点
    if (p != NULL) {                            // 非尾节点才执行 
        rDis(p->next);                          // 先到下一个节点 
        cout << p->val << " ";                   // 访问完下一个节点才输出当前节点的值 
    }
    return;
}
// 查看几个节点
void DisNum(Node*& p, int count) {
    if (p == NULL) {                            // 递归访问到尾节点了 
        cout << count << endl;                   // 输出统计的个数 
        return;                                  // 结束向下一层递归 
    }
    DisNum(p->next, count + 1);       // 非尾节点就向下一层递归 
}
// 访问第k个节点的值
void Dis_k_val(Node*& p, int count, int k) {
    if (p == NULL) {
        cout << "抱歉，无法访问第" << k << "个节点" << endl;
        return;  // 回溯，终止向下一个节点递归
    }   // 不存在该节点 
    if (count == k - 1) {                       // 若存在第k个节点 
        cout << p->val << endl;                   // 则输出 
        return;                                  // 回溯，终止向下一个节点递归 
    }
    Dis_k_val(p->next, count + 1, k);          // 若没到第k个节点,访问下一个节点 
}

// 在k位插入e
void Add_e_to_k(Node*& p, int count, int k, int e) {
    if (p == NULL) {
        cout << "抱歉，无法访问第" << k << "个节点" << endl;
        return;  // 回溯，终止向下一个节点递归
    }   // 不存在该节点 
    if (count == k - 1) {                       // 若存在第k个节点 
        Node* s = new Node;                     // 创建新节点 
        s->val = e;                             // 存入e 
        s->next = p->next;                      // 插入第k个节点到新节点之后
        p->next = s;                            // 将e插入到第k位置之后 
        return;                                  // 回溯，终止向下一个节点递归 
    }
    Add_e_to_k(p->next, count + 1, k, e);          // 若没到第k个节点,访问下一个节点 
}

// 删除第k个节点
Node* Del(Node*& p, int count, int k, Node*& f) {       // 可以删除头节点 ,相当于不存在头节点 
    if (p == NULL) {
        cout << "抱歉，无法访问第" << k << "个节点" << endl;// 不存在该节点 
        return f;                                  // 外面的p依旧指向第一个节点 
    }
    if (k == 1) {                                   // 若删除第一个节点 
        Node* s = p->next;                          // 记录第二个节点的地址 
        delete p;                                   // 删除第一个节点 
        return s;                                   // 返回第二个节点地址 
    }
    if (count == k - 1) {                       // 若存在第k个节点 
        Node* s = p->next;                      // 记录第k节点地址 
        p->next = p->next->next;  // 链接k节点的前后节点 
        delete s;  // 删除k节点 
        cout << "删除成功" << endl;
        return f;                                  // 回溯，终止向下一个节点递归,并返回原第一个节点的地址 
    }
    return Del(p->next, count + 1, k, f);          // 若没到第k个节点,访问下一个节点 
}

// 删除第一个X值的节点
Node* Del_val_X(Node* p, int x) {       // 删除值为X的第一个数据结点
    if (p == nullptr) return nullptr;   // 若为空，返回空指针
    if (p->val == x) {                  
        Node* temp = p;                 // 否则用temp存储当前节点
        p = p->next;                    // 删除
        delete temp;
        return p;                       // 返回下一个节点指针
    }
    p->next = Del_val_X(p->next, x);
    return p;
}
// 删除值为X的所有数据结点
Node* Del_all_val_k(Node* p, int k) {               
    if (p == nullptr) return nullptr;             // 若当前节点为空，直接返回 NULL
    p->next = Del_all_val_k(p->next, k);           // 递归调用 Del_all_val_k 函数处理当前节点的下一个节点，确保后续链表中值为 k 的节点都被删除
    if (p->val == k) {                            // 若当前节点的值为 k，删除当前节点并返回下一个节点
        Node* temp = p;
        p = p->next;
        delete temp;
    }
    return p;  // 返回处理后的当前节点
}

// 14. 输出该链表的最大值
int findMax(Node* p) {
    if (p->next == nullptr) return p->val;
    int maxRest = findMax(p->next);
    return (p->val > maxRest) ? p->val : maxRest;
}

// 15. 输出该链表的最小值
int findMin(Node* p) {
    if (p->next == nullptr) return p->val;
    int minRest = findMin(p->next);
    return (p->val < minRest) ? p->val : minRest;
}

// 16. 查找值为X的数据结点在当前链表出现的位置
void findPos(Node* p, int x) {
    bool found = false;
    int pos = 1;
    while (p != nullptr) {
        if (p->val == x) {
            cout << "值为 " << x << " 的节点出现在位置 " << pos << endl;
            found = true;
        }
        p = p->next;
        pos++;
    }
    if (!found) {
        cout << "没有值为 " << x << " 的节点" << endl;
    }
}

// 17. 销毁该链表
void destroyList(Node* p) {
    if (p == nullptr) return;
    destroyList(p->next);
    delete p;
}

int main() {

    int arr[] = { 13,15,8,4,8,3,4,8 };
    Node* p = NULL;                             // 节点置空 
    for (int i = 0; i < 8; i++) Insert(p, arr[i]);      // 1.插入数据 
    cout << "正向输出："; Dis(p);                    // 2.正向输出所有节点值									
    cout << endl;
    cout << "逆向输出："; rDis(p);                    // 3.逆向输出所有节点值
    cout << endl;
    cout << "节点个数："; DisNum(p, 0);   // 4.输出单链表中数据结点个数
    cout << "请输入访问第几个节点："; int k; cin >> k; // 输入k 
    cout << "第" << k << "个节点是："; Dis_k_val(p, 0, k); // 5.输出第k个节点
    cout << "在第k个位置插入e："; int e; cin >> k >> e; // 输入k，e 
    Add_e_to_k(p, 0, k, e);  // 6.在第k个位置上插入e元素 
    cout << "正向输出："; Dis(p);                    // 7.正向输出所有节点 
    cout << endl;
    cout << "请输入删除第几个节点："; cin >> k;        // 输入k 
    p = Del(p, 1, k, p);                           // 8.删除第k个节点 
    cout << "正向输出："; Dis(p);                    // 9.正向输出所有节点
    cout << endl;
    cout << "请输入对应值k，删除val为k的第一个节点："; cin >> k;        // 输入k 
    p = Del_val_X(p, k);                          // 10.删除val为k的第一个节点
    cout << "正向输出："; Dis(p);                    // 11.正向输出所有节点	
    cout << endl;

    cout << "请输入要删除的所有值X："; cin >> k;
    p = Del_all_val_k(p, k);                      // 12.删除所有值为X的数据结点
    cout << "正向输出："; Dis(p);                  // 13，正向输出所有节点值
    cout << endl;

    if (p != nullptr) {
        cout << "链表的最大值是：" << findMax(p) << endl; // 14，输出该链表的最大值
        cout << "链表的最小值是：" << findMin(p) << endl; // 15，输出该链表的最小值
    }

    cout << "请输入要查找的值X："; cin >> k;
    findPos(p, k);                                      // 16.查找值为X的数据结点在当前链表出现的位置
    destroyList(p);                                     // 17.销毁该链表
    p = nullptr;

    return 0;
}