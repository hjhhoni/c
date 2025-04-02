//参考了刘汝佳"蛇形填数"的算法
#include <stdio.h>
#include <string.h>    //内含memset()函数
int main()
{
    int n, x, y, tot = 0, a[10][10];
    scanf("%d", &n);
    memset(a, 0, sizeof(a));    //将数组元素全部初始化为0,以便之后判断
    tot = a[x = 0][y = 0] = 1;

    while (tot < n * n)
    {    //先进性预判，碰壁就不往下走，!a[x][y+1]等价于a[x][y+1]==0
        while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++tot;
        while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++tot;
        while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++tot;
        while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++tot;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
                
    return 0;
}
