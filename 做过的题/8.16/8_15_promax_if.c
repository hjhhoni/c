#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // 初始化随机数种子

    int secret_number = rand() % 100 + 1; // 随机数在1到100之间
    int guess;
    int attempts = 0;

    printf("欢迎来到猜数字游戏！请输入一个1到100之间的整数：\n");

    do {
        scanf("%d", &guess);
        attempts++;

        if (guess < secret_number) {
            printf("猜小了！\n");
        } else if (guess > secret_number) {
            printf("猜大了！\n");
        } else {
            printf("恭喜，你猜对了！你总共尝试了%d次。\n", attempts);
            break;
        }
    } while (guess != secret_number);

    return 0;
}