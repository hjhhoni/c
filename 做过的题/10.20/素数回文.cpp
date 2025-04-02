#include <bits/stdc++.h>
using namespace std;

int isPrime[10000000];

// 判断是否为回文数
bool judge(int num) {
    if (num % 10 == 0 && num != 0) return false; // 以0结尾的数不能是回文数
    int reversed = 0, original = num;
    while (num) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int a, b;
    cin >> a >> b;
    b = min(9999999, b); // 限制 b 的最大值
    for(int i=0;i<=b;i++){
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=b;i++){
        if (isPrime[i])
        {
            for(int j=i*i;j<=b;j+=i){
                isPrime[j]=false; //i的倍数都不为质数
            }
        }
        
    }
    
    for (int i = a; i <= b; i++) {
        if (isPrime[i] && judge(i)) { // 判断是否为素数且是回文数
            cout << i << endl; // 输出符合条件的数
        }
    }
    
    return 0;
}
