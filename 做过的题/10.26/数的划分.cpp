#include <iostream>
using namespace std;
int n,k,count=0;
void dfs(int i,int depth){
    if(depth==k){
        if(n==0) count++;
        return;
    }

    for(;i<=n;i++){  //起点i迭代是关键
        n-=i;
        dfs(i,depth+1);
        n+=i;
    }
    return;
}
int main() {
    cin>>n>>k;
    dfs(1,0);

    cout<<count;
    return 0;
}