#include <iostream>
#include <string.h>
using namespace std;
typedef long long ll;
typedef struct node{
    char data;
    struct node *lchild;
    struct node *rchild;
}tree;

tree* createtree(char* pre,char* in,int n){
    if(n==0) return NULL;
    tree* root = new tree;
    root->data = pre[0];
    int root_index_of_in = 0;

    while (in[root_index_of_in]!=pre[0]&&root_index_of_in<n)
    {
        root_index_of_in++;
    }

    int leftsize = root_index_of_in;
    int rightsize = n - root_index_of_in -1;

    root->lchild = createtree(pre + 1,in,leftsize);
    root->rchild = createtree(pre + leftsize + 1,in + leftsize + 1,rightsize);
    return root;
}

void posttree(tree* T){
    if (T!=NULL)
    {
        posttree(T->lchild);
        posttree(T->rchild);
        cout<<T->data;
    }
}

void solve(){
    char T1[30]; //前序
    char T2[30]; //中序
    cin>>T1;
    cin>>T2;
    tree *root = createtree(T1,T2,(int)strlen(T1));
    posttree(root);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}