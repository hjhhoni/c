#include <iostream>
#include <vector>
#define MaxSize 30
using namespace std;
typedef char ElemType;
typedef ElemType SqBTree[MaxSize + 1];
vector<char> biao[MaxSize + 1];
int MG = 0;
typedef struct node
{
    char data;
    struct node* r;
    struct node* l;
}Tree;
// 构建树
Tree* dfs(char* pre, char* in, int n)
{
    if (n == 0) return NULL;
    Tree* root = new Tree;
    root->data = pre[0]; //根节点
    int inrootindex = 0;
    while (inrootindex < n && in[inrootindex] != pre[0]) inrootindex++;
    int leftSize = inrootindex;
    int rightSize = n - inrootindex - 1;
    // 反转左右子树
    root->r = dfs(pre + 1, in, leftSize);
    root->l = dfs(pre + 1 + leftSize, in + inrootindex + 1, rightSize);
    return root;
}
// 层次存储节点
void cen(Tree* root, int G)
{
    if (root == NULL) return;
    biao[G].push_back(root->data);
    cen(root->l, G + 1);
    cen(root->r, G + 1);
    MG = max(MG, G);  // 存储层数
}

int main() {

    int N;cin >> N;
    SqBTree in;for (int i = 0;i < N;i++)cin >> in[i];
    SqBTree pre;for (int i = 0;i < N;i++)cin >> pre[i];
    Tree* root = dfs(pre, in, N);

    cen(root, 0);
    int f = 1;
    for (int i = 0;i <= MG;i++)
    {
        for (auto j : biao[i]) {
            if (f == 1) f = 0;
            else cout << " ";
            cout << j;
        }
    }
}

