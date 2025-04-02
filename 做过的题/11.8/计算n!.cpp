#include <iostream>
using namespace std;

int num[100000];

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        num[0] = 1; // num[0] 存储有效数字的个数
        num[1] = 1;

        for (int i = 2; i <= n; i++) {
            int temp = 0; // temp 代表进位数
            for (int j = 1; j <= num[0]; j += 3) { // 每次处理三个数
                int product1 = j <= num[0] ? num[j] * i + temp : temp;
                int product2 = (j + 1 <= num[0]) ? num[j + 1] * i : 0;
                int product3 = (j + 2 <= num[0]) ? num[j + 2] * i : 0;

                // 计算三组乘法的和
                int sum = product1 + product2 + product3;
                num[j] = sum % 10; // 当前位
                temp = sum / 10; // 进位

                // 更新进位到下一个相应的数字位置
                if (j + 1 <= num[0]) {
                    sum = product2 + temp;
                    num[j + 1] = sum % 10;
                    temp = sum / 10;
                }
                if (j + 2 <= num[0]) {
                    sum = product3 + temp;
                    num[j + 2] = sum % 10;
                    temp = sum / 10;
                }
            }

            // 将进位添加到 num 中
            while (temp) {
                num[0]++;
                num[num[0]] = temp % 10;
                temp = temp / 10;
            }
        }

        // 逆序输出结果
        for (int i = num[0]; i >= 1; i--) {
            cout << num[i];
        }
        cout << endl;
    }

    return 0;
}
