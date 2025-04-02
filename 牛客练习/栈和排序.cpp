// #include <iostream>
// #include <vector>
// #include <stack>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,a[1000100],maxn[1000100],i;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=n-1;i>=0;i--){
        maxn[i] = max(maxn[i+1],a[i]); // 算出i到n-1的最大值数组，maxn[i]表示i到n-1的最大值
    }
    stack<int> s;
    for(i=0;i<n;i++){
        s.push(a[i]);
        while(!s.empty() && s.top()>maxn[i+1]){ // 如果栈顶元素比后面要入栈的元素都大，则弹出
            cout<<s.top()<<" "; // 输出栈顶元素
            s.pop();
        }
    }
    while (!s.empty()) { // 如果栈不为空，则输出栈顶元素
    
        cout<<s.top()<<" "; // 输出栈顶元素
        s.pop();
    }
    
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}