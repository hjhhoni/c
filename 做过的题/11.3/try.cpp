#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // 读取测试用例数量

    while (T--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<string> moves;

        // 生成所有的 Move(i)
        for (int i = 0; i < n; ++i) {
            // 创建一个新的字符串
            string move_i = s; 
            // 将第 i 个字符移到开头
            char tmp = move_i[i];
            move_i.erase(i, 1); // 移除字符
            move_i = tmp + move_i; // 加到前面
            moves.push_back(move_i);
        }

        // 按字典序排序
        sort(moves.begin(), moves.end());

        // 输出第 k 小的字符串
        cout << moves[k - 1] << endl;
    }

    return 0;
}
