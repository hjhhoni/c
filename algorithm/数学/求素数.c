// 8. 求出1-N中的所有素数(埃拉托斯特尼筛)
#include<stdio.h>
#include<stdbool.h>
// 要减小此代码的复杂度，可以优化寻找素数的算法。可以利用埃拉托斯特尼筛（Sieve of Eratosthenes）算法，这种算法效率更高，时间复杂度为 O(n log log n)。
// 在这个优化后的代码中，我们使用了一个布尔数组 isPrime 来标记每个数是否为素数。我们首先假设所有数都是素数（除了0和1），然后通过筛选的方式将非素数标记出来，最后输出所有标记为素数的数。这种方法大大提高了效率，尤其是在处理较大的 N 时。
int main() {
    int a;
    scanf("%d", &a);
    
    bool isPrime[a + 1];
    
    // 初始化所有数为素数
    for (int i = 0; i <= a; i++) {
        isPrime[i] = true;
    }
    
    isPrime[0] = isPrime[1] = false; // 0和1不是素数

    for (int i = 2; i * i <= a; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= a; j += i) {
                isPrime[j] = false; // 将i的倍数标记为非素数
            }
        }
    }
    
    // 输出所有素数
    for (int i = 2; i <= a; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }

    return 0;
}
//判断一个数是否为素数O(根号n)

int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0和1不是素数
    }
    for (int i = 2; i * i <= n; i++) { // 只需要检查到sqrt(n)
        if (n % i == 0) {
            return 0; // 找到因子，说明不是素数
        }
    }
    return 1; // 是素数
}
