#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int coins[30];
    for (int i = 0; i < N; i++) {
        scanf("%d", &coins[i]);
    }

    // 使用布尔数组记录可以支付的金额
    bool possible[301] = {false}; // 最多 300 的金额
    possible[0] = true; // 0元是一种可能支付金额

    // 使用三重循环枚举所有硬币组合
    for (int i = 0; i < N; i++) {
        possible[coins[i]] = true; // 使用一枚硬币
        for (int j = i + 1; j < N; j++) {
            possible[coins[i] + coins[j]] = true; // 使用两枚硬币
            for (int k = j + 1; k < N; k++) {
                possible[coins[i] + coins[j] + coins[k]] = true; // 使用三枚硬币
            }
        }
    }

    // 统计可能的金额种类数
    int result = 1;
    for (int i = 1; i <= 300; i++) {
        if (possible[i]) {
            result++;
        }
    }

    printf("%d\n", result);
    
    return 0;
}
