#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    for (i = 0; i < 3; i++, i++) { // i 每次增加2
        for (j = 4; j >= 0; j--) { // j 从4开始递减
            if ((j + i) % 2) { // 如果 (j + i) 为奇数
                j--; // j 递减
                printf("%d,", j); // 打印减后的 j
                continue; // 跳过后续代码，进入下次内循环
            }
            --i; // i 递减
            j--; // j 递减
            printf("%d,", j); // 打印减后的 j
        }
    }
    system("pause");
    return 0;
}
