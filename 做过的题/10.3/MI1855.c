#include <stdio.h>
// 我们要求找出具有下列性质数的个数 ( 包含输入的自然数 ):
// 先输入一个自然数 ，然后对此自然数按照如下方法进行处理:
// 不作任何处理;
// 在它的左边加上一个自然数,但该自然数不能超过原数的一半;
// 加上数后,继续按此规则进行处理,直到不能再加自然数为止.
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
