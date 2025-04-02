#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;


int main() {
    int n;
    cin >> n;
    ll sum = n*(1+n)/2; // 1+2+3+...+n=n*(n+1)/2
    int a[100100] = {0};
    ll count = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(x>n){
            cout<<"-1"<<endl;
            return 0;
        }
        a[x]++;
        count += x;
    }
    if(count != sum) {
        cout<<"-1"<<endl;
        return 0;
    }else{
        ll cnt = 0;
        
    }

    return 0;
}