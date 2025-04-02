#include <stdio.h>

int main(){
    int m;
    long long n, max = -10001, min = 10001;

    scanf("%d", &m); // 读取整数个数

    for (int i = 0; i < m; i++) {
        scanf("%lld", &n); // 读取每个整数
        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    }
    
    printf("%lld", max - min); // 输出最大和最小值的差
    return 0;
}
