#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define TARGET 24
#define EPSILON 1e-6

bool solve(double nums[], int n) {
    // 如果只有一个数字，判断它是否等于目标值
    if (n == 1) {
        return fabs(nums[0] - TARGET) < EPSILON; //判断是否为0，及算式是否可以得到24
    }

    // 尝试对每一对数字进行运算
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double a = nums[i], b = nums[j];
            double nextNums[n - 1];  //每层dfs的nextNums都是下一层的nums都是一个新的数组
            int pos = 0;

            // 将没有参与运算的数字放入nextNums数组
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {

                    
                    nextNums[pos++] = nums[k]; 
                }
            }
            // 每次都会把结果放在最后一位数组元素

            // 尝试不同的运算
            nextNums[pos] = a + b;  //每次其实都是数组的最后一个数为每两个数的计算结果
            if (solve(nextNums, n - 1)) return true;

            nextNums[pos] = a - b;
            if (solve(nextNums, n - 1)) return true;

            nextNums[pos] = b - a;
            if (solve(nextNums, n - 1)) return true;

            nextNums[pos] = a * b;
            if (solve(nextNums, n - 1)) return true;

            if (fabs(b) > EPSILON) {
                nextNums[pos] = a / b;
                if (solve(nextNums, n - 1)) return true;
            }

            if (fabs(a) > EPSILON) {
                nextNums[pos] = b / a;
                if (solve(nextNums, n - 1)) return true;
            }
        }
    }
    return false;
}

int main() {
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d), a || b || c || d) {
        double nums[] = {a, b, c, d};
        if (solve(nums, 4)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
