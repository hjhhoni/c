#include <stdio.h>

int gcd(int a, int b) {
    // 使用辗转相除法（欧几里得算法）计算最大公约数
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("%d\n", gcd(a, b));
    return 0;
}
