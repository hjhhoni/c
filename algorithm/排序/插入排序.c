#include <stdio.h>

int minRotations(int* cars, int n) {
    int rotations = 0;
    for (int i = 0; i < n; ++i) {
        // 每个车厢转到目标位置所需的旋转次数
        for (int j = i; j > 0 && cars[j] < cars[j - 1]; --j) {
            // 交换车厢位置
            int temp = cars[j];
            cars[j] = cars[j - 1];
            cars[j - 1] = temp;
            rotations++;
        }
    }
    return rotations;
}

int main() {
    int n;
    scanf("%d", &n);
    int cars[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &cars[i]);
    }
    printf("%d\n", minRotations(cars, n));
    return 0;
}
