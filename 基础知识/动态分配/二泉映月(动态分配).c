#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 1000000002

int main() {
    int n;
    scanf("%d", &n);

    // 使用哈希表记录数字的出现个数，根据需要调整大小
    int *count = (int *)calloc(MAX_VAL + 1, sizeof(int));

    int p;
    long long x;
    for (int i = 0; i < n; i++) {
        scanf("%d %lld", &p, &x);
        if (p == 1) {
            // 增加 x 的计数
            count[x]++;
        } else if (p == 2) {
            // 查询 x 的计数并输出
            printf("%d\n", count[x]);
        }
    }

    // 释放内存
    free(count);
    return 0;
}
