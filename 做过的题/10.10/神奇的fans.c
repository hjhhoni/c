#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    
    while (n-- > 0) {
        int m;
        scanf("%d", &m);
        int *a = (int *)malloc(m * sizeof(int));
        
        for (int i = 0; i < m; i++) {
            scanf("%d", &a[i]);
        }
        
        qsort(a, m, sizeof(int), compare); // 进行排序
        
        int lis = a[0] - a[1]; // 算出第一个数与第二个数的差值
        int flag = 1; // 设置标志为真
        
        for (int i = 0; i < m - 1; i++) { // 判断是否为公差
            if (a[i] - a[i + 1] != lis) {
                flag = 0; // 设置标志为假
                break;
            }
        }
        
        if (flag) {
            printf("yes\n");
        } else {
            printf("no\n");
        }

        free(a); // 释放动态分配的内存
    }
    
    return 0;
}