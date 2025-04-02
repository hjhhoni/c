#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int arr[4]; // 存储输入的四个互不相同的数字

    // 输入四个互不相同的数字
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+4);

    // 生成所有可能的三位数的组合
    for (int i = 0; i < 4; i++) {         // 选择第一个数字
        for (int j = 0; j < 4; j++) {     // 选择第二个数字
            if (j == i) continue;          // 确保第二个数字不等于第一个
            for (int k = 0; k < 4; k++) { // 选择第三个数字
                if (k == i || k == j) continue; // 确保第三个数字不等于前两个
                // 输出当前的三位组合
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }

    return 0;
    
}
