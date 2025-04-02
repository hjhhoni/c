#include <stdio.h>

int R, C;
int a[502][502];
int book[502][502];
int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // 右、下、左、上

int dfs(int y, int x) {
    if (book[y][x] != 0) return book[y][x]; // 如果已经计算过，直接返回

    book[y][x] = 1; // 初始化长度为1
    for (int i = 0; i < 4; i++) {
        int newY = y + directions[i][0];
        int newX = x + directions[i][1];
        if (newY >= 1 && newY <= R && newX >= 1 && newX <= C && a[newY][newX] < a[y][x]) {
            int length = dfs(newY, newX) + 1; // 继续滑行
            if (length > book[y][x]) {
                book[y][x] = length;
            }
        }
    }
    return book[y][x];
}

int main() {
    scanf("%d %d", &R, &C);
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxLength = 0;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            int currentLength = dfs(i, j);
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }
    }

    printf("%d\n", maxLength);
    return 0;
}
