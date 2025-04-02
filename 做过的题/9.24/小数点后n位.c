#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    
    a = a % b; // 获取初始余数
    for (int i = 0; i < n - 1; i++) {
        a = a * 10;
        a = a % b; // 更新余数
    }
    
    // 找到第 n 位
    a = a * 10;
    printf("%d\n", a / b);
    
    return 0;
}
