#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[0] = -2e9;
    ranges::sort(a);
    auto sum = 0ll; //等价于long long sum = 0;
    auto ans = 0ll;
    for(int i = 1; i <= n; i++){
        sum += a[i] - i; // 若sum=0，则说明所有数都符合排列要求
        if(a[i] < i) ans += i - a[i]; //因为加一的同时也加一，故只需要单独算加的次数或减的次数即可
    }
    if(sum) ans = -1;
    cout << ans << endl;
}

