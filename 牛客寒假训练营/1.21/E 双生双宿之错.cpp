#include<bits/stdc++.h>

using namespace std;

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        ranges::sort(a);
        auto get = [&](auto x, auto y){
            auto ans = 0ll;
            for(int i = 1; i <= n / 2; i++){
                ans += abs(a[i] - x);
            }
            for(int i = n / 2 + 1; i <= n; i++){
                ans += abs(a[i] - y);
            }
            return ans;
        };
        auto check = [&](int x, int y){
            auto t = 0ll;
            if(a[x] != a[y]) t = get(a[x], a[y]); //a[2] = 2, a[5] = 5，分别为两个数组的中位数
            else t = min(get(a[x] - 1, a[y]), get(a[x], a[y] + 1)); // get(x,y)中x绝对小于y，所以判断这两种情况
            return t;
        };
        // 取n为6,[1,2,3,4,5,6]
        // 取n为8,[1,2,3,4,5,6,7,8]
        int t = n >> 1; //6 >> 1 = 3 ，8 >> 1 = 4
        //二进制中，十进制t是奇数，那么t的二进制表示最右边的一位（最低位）为1，否则为0
        int x = 0, y = 0;
        // 求左右数组的中位数，若左右数组的长度是奇数，那么中位数就是中间那个数，左右数组的长度是偶数，那么取中间偏左或偏右都可以
        if(t & 1){ //如果t是奇数3，3&1=1为真
            x = t + 1 >> 1; // x = 3 + 1 >> 1 = 2
            y = t + x; // y = 3 + 2 = 5
        }
        else{ //如果t是偶数4，4&1=0为假
            x = t >> 1; // x = 4 >> 1 = 2
            y = t + x + 1; // y = 4 + 2 + 1 = 7
        }
        cout << check(x, y) << endl;
    }
}

