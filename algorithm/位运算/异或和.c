#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    //a<b
    int xorSum = 0; // 初始化异或和为0

    // 计算从 a 到 b 的异或和
    for (int i = a; i <= b; i++) {
        xorSum ^= i; // 进行异或操作
    }
    //异或运算
    /*
    0 ^ 0 = 0
    0 ^ 1 = 1
    1 ^ 0 = 1
    1 ^ 1 = 0
    */
    printf("%d",xorSum);

    return 0;
}
