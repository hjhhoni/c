#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    vector<int> v(3);  // vector初始化用小括号时，每个元素都是一个值，而不是一个对象
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    for(auto i:v) cout<<i<<" ";  // 1 2 3
    vector<int> v1[3];  // vector初始化用大括号时，每个元素都是一个对象
    v1[0].emplace_back(1);
    v1[0].emplace_back(2);
    v1[0].emplace_back(3); // emplace_back()在容器尾部添加一个元素，所为的邻接表通常用于图论
    v1[1].emplace_back(2);
    v1[2].emplace_back(3);
    for(auto i:v1){
        for(auto j:i){
            cout<<j<<" ";  // 1 2 3 2 3 
        }
        cout<<endl;
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}