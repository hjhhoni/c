#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;


int main() {
    int n;
    cin >> n;
    map<string,int> mp;
    string s;
    for(int i = 0; i < n; i++) {
        cin>>s;
        mp[s]++;
        if(s == "younik") {
            cout<<mp.size()<<endl;
            return 0;
        }
    }


    return 0;
}