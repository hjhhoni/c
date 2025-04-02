#include <stdio.h>

int main() {
    int matrix[5][5];
    int saddlePointFound = 0;

    // 读入矩阵
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 检查鞍点
    for (int i = 0; i < 5; i++) {
        int rowMax = matrix[i][0];
        int rowMaxCol = 0;

        // 找到每行的最大值
        for (int j = 1; j < 5; j++) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
                rowMaxCol = j;
            }
        }

        // 检查该行最大值是否为列的最小值
        int isMinInCol = 1;
        for (int k = 0; k < 5; k++) {
            if (matrix[k][rowMaxCol] < rowMax) {
                isMinInCol = 0;
                break;
            }
        }

        // 如果找到鞍点，输出并标记
        if (isMinInCol) {
            printf("%d %d %d\n", i+1, rowMaxCol+1, rowMax);
            saddlePointFound = 1;
            break;
        }
    }

    // 如果没有找到鞍点，输出“not found”
    if (!saddlePointFound) {
        printf("not found\n");
    }

    return 0;
}
