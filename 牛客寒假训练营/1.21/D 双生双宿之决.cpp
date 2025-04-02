#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n); 
        for(auto &i : a){
            cin >> i;   // 例如{1,1,4,1,4,4}
        }
        ranges::sort(a); // 排序为{1,1,1,4,4,4}
        int ans = 1;
        if(n & 1) ans = 0;
        else{
            int r = n + 1 >> 1; // r = 3
            int l = r - 1; // l = 2
            if(a[0] != a[l]) ans = 0; //比较对半分元素左边是否相同 
            if(a[n - 1] != a[r]) ans = 0;  //比较对半分元素右边是否相同
            if(a[l] == a[r]) ans = 0; // 对半分元素左边和右边是否相同
        }
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

