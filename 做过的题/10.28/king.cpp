#include <iostream>
#include <vector> //允许以动态方式管理数组大小。
#include <string>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<string> matrix(n); //创建一个名为matrix的字符数组
        for (int i = 0; i < n; ++i) {
            cin >> matrix[i];
        }

        int king = -1;  //一开始没有king
        for (int i = 0; i < n; ++i) {
            bool isKing = true;
            for (int j = 0; j < n; ++j) {
                if (i != j && matrix[i][j] != '1') { //i!=j(不自己打自己)
                    isKing = false;
                    break;
                }
            }
            if (isKing) {
                king = i + 1;  // 加1，因为索引从0开始，而儿童是从1开始编号
                break;
            }
        }

        cout << king << endl;
    }

    return 0;
}
