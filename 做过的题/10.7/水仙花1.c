#include <stdio.h>
#include <math.h>

int main() {
    int number;
    scanf("%d", &number);

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    // 计算各位数字的立方和
    int sumOfCubes = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);

    // 判断是否为水仙花数
    if (sumOfCubes == number) {
        printf("1\n"); // 是水仙花数
    } else {
        printf("0\n"); // 不是水仙花数
    }

    return 0;
}
