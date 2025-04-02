#include <stdio.h>
#include <stdbool.h>
// 从n个数中选k个相加为素数,判断有多少种组合(1+6=7和6+1=7算两次)
bool is_prime(int num) {//判断素数
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// 用于计算组合和的函数
void find_sums(int a[], int n, int k, int start, int depth, int current_sum, int *count) {
    if (depth == k) {  //这个出口标志着有几层for循环
        if (is_prime(current_sum)) {
            (*count)++;
        }
        return;
    }
    
    for (int i = start; i < n; i++) {
        find_sums(a, n, k, i + 1, depth + 1, current_sum + a[i], count);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[20];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int prime_count = 0; //素数和总数
    find_sums(a, n, k, 0, 0, 0, &prime_count);

    printf("%d\n", prime_count);
    
    return 0;
}
