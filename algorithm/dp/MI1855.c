#include <stdio.h>

#define MAX_N 1000

int count[MAX_N + 1] = {0};

void initializeCount() {
    count[1] = 1; // n=1 时的计数
    for (int i = 2; i <= MAX_N; i++) {
        count[i] = 1; // 本身包含
        for (int j = 1; j <= i / 2; j++) {
            count[i] += count[j];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // 初始化计数
    initializeCount();

    // 输出结果
    printf("%d\n", count[n]);
    return 0;
}
