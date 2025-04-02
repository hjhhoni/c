#include <stdio.h>

// 快速幂取模函数
/*
指数折半，底数平方，每次都求模
*/
int powerMod(int a, int b, int mod) {
    int result = 1%mod;  //取模防止mod为1
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