#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[20];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int minWeight = 0x7FFFFFFF; // 设置一个较大的初始最小值

    // 遍历所有非空子序列
    for (int i = 1; i < (1 << n); i++) { //从1到2^n-1,n为4时为1~15
        int weight = a[0];
        for (int j = 0; j < n; j++) { //0~3
            if (i & (1 << j)) {  //拿1~15与2^j(1,2,4,8)进行按位与运算
                weight &= a[j];  //若为>0,则让weight与a[j]进行按位与计算
            }
        }
        if (weight < minWeight) {
            minWeight = weight;
        }
    }

    printf("%d\n", minWeight);
    
    return 0;
}
