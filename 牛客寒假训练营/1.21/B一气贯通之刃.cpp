#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> in(n + 1);
    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;
        in[u]++;
        in[v]++;
    }
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(in[i] == 1) ans.push_back(i);
        if(in[i] > 2){
            cout << -1 << endl;
            return 0;
        }
    }
    for(auto &i : ans){
        cout << i << " ";
    }
    cout << endl;
}

