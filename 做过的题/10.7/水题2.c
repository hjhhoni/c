#include <stdio.h>

// 计算阶乘的函数
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int N;
    scanf("%d", &N);

    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += factorial(i); // 计算并累加阶乘
    }

    // 输出结果
    printf("%lld\n", sum);
    return 0;
}
