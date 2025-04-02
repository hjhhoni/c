#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int cube = m * m * m;
    int start = m * (m - 1) / 2; // 计算首个数字之前的和
    printf("%d*%d*%d=%d=", m, m, m, cube);

    for (int i = 0; i < m; i++) {
        int odd = 2 * (start + i) + 1; // 计算连续奇数
        if (i > 0) {
            printf("+");
        }
        printf("%d", odd);
    }

    printf("\n");
    return 0;
}
