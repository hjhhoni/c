#include <stdio.h>

int main() {
    for (int abcd = 1000; abcd <= 9999; abcd++) {
        int ab = abcd / 100;        // 计算前两位
        int cd = abcd % 100;        // 计算后两位
        int sum_square = (ab + cd) * (ab + cd); // 计算 (ab + cd)^2

        if (sum_square == abcd) {
            printf("%d ", abcd); // 输出符合条件的四位数
        }
    }
    return 0;
}
