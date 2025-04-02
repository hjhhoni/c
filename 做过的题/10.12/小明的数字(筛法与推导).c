#include <stdio.h>

long long sum_of_multiples(int k, long long n) {
    long long p = n / k;
    return k * p * (p + 1) / 2;
}

long long total_sum(long long n) {
    long long sum_3 = sum_of_multiples(3, n);
    long long sum_5 = sum_of_multiples(5, n);
    long long sum_7 = sum_of_multiples(7, n);
    
    long long sum_15 = sum_of_multiples(15, n);  // 3 * 5
    long long sum_21 = sum_of_multiples(21, n);  // 3 * 7
    long long sum_35 = sum_of_multiples(35, n);  // 5 * 7
    long long sum_105 = sum_of_multiples(105, n);  // 3 * 5 * 7

    return sum_3 + sum_5 + sum_7 - sum_15 - sum_21 - sum_35 + sum_105;
}

int main() {
    long long n;
    scanf("%lld", &n);  // 使用 %lld 读取 long long 类型

    long long result = total_sum(n);
    printf("%lld\n", result);  // 输出结果
    return 0;
}
