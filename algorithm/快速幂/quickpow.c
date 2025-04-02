#include <stdio.h>
// 快速幂
/*
1.二进制
2.指数折半
 */

long long int quickpow(int base, int power); // 函数声明

int main() {
    int a,b;
    long long int quickpow(int base, int power);
    scanf("%d %d", &a, &b);
    
    printf("%lld", quickpow(a, b));
}

long long int quickpow(int base, int power) {
    long long int result = 1;
    while (power > 0) { // 指数大于0进行指数折半，底数变其平方的操作
        if (power % 2 == 1) { // 指数为奇数
            result *= base;   // 分离出当前项并累乘后保存
        }
        base *= base;         // 底数变其平方
        power /= 2;          // 指数折半
    }
    return result;          // 返回最终结果
}
