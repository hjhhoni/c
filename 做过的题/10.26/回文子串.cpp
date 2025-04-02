#include <iostream>
#include <string>
using namespace std;

int longestPalindromeSubstr(const string& str) {
    int n = str.length();
    if (n == 0) return 0;

    // 创建一个二维数组来存储动态规划的状态
    bool dp[n][n];
    int maxLength = 1;

    // 单个字符的回文长度为1
    for (int i = 0; i < n; ++i) {
        dp[i][i] = true;
    }

    // 检查两个字符的情况
    for (int i = 0; i < n - 1; ++i) {
        if (str[i] == str[i + 1]) {
            dp[i][i + 1] = true;
            maxLength = 2;
        } else {
            dp[i][i + 1] = false;
        }
    }

    // 检查长度大于2的子串
    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            if (str[i] == str[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                maxLength = len;
            } else {
                dp[i][j] = false;
            }
        }
    }

    return maxLength;
}

int main() {
    string str;
    cout << "请输入字符串：";
    cin >> str;

    int maxLength = longestPalindromeSubstr(str);
    cout << "最长回文子串的长度是: " << maxLength << endl;
    
    return 0;
}
