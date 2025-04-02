#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

int cun[1005];
ll cnt;


void solve(){
    int M,N;
    cin>>M>>N;
    queue<int> q;
    for(int i=1;i<=N;i++){
        int x;cin>>x;
        if(!cun[x]){ //不在内存中
            cun[x] = 1;
            q.push(x);
            cnt++;
            if(q.size()>M){  //超出内存大小
                cun[q.front()] = 0;   //内存中删除先存入的
                q.pop(); //队列中删除
            }
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}