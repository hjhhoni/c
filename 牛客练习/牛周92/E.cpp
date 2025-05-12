#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

typedef struct{
    
}

int main(){
    int n;cin>>n;  // 层数
    vector<int> level(n+1);
    int sum = 0;
    for(int i=1;i<=n;i++) {
        cin>>level[i]; // 记录每层的节点数规则
        sum+=level[i];
    }
    vector<int> G; // 存储树的图
    

}