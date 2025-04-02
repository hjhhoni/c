#include <iostream>
#include <cmath> // 
using namespace std;

const long long MOD = 1000000007;
long long powerMod(long long a,long long b,long long mod) {
    long long result = 1%mod;  //取模防止mod为1
    a = a % mod; // 先对a取模保证其不会过大

    while (b > 0) {
        if (b % 2 == 1) { // 如果b是奇数,或b=1时
            result = (result * a) % mod;
        }
        a = (a * a) % mod; // 平方
        b /= 2; // b右移一位相当于b除以2
    }

    return result;
}
int main() {
    int t;
    cin >> t; // 输入比赛次数
    while (t--) {
        long long n;
        cin >> n; // 输入题目数量
        cout<<powerMod(2,n,MOD)-1<<endl;
    }
    return 0;
}
