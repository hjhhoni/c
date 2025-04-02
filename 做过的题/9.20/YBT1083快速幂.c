#include <stdio.h>

// 快速幂取模函数
int powerMod(int a, int b, int mod) {
    int result = 1;
    a = a % mod; // 先对a取模保证其不会过大

    while (b > 0) {
        if (b % 2 == 1) { // 如果b是奇数
            result = (result * a) % mod;
        }
        a = (a * a) % mod; // 平方
        b /= 2; // b右移一位相当于b除以2
    }

    return result;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int resultDay = powerMod(a, b, 7);

    switch (resultDay) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}