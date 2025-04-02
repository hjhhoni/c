#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string s;
    getline(cin, s); // 使用getline读取包含空格的字符串
    map<char, int> mp;
    char ch;
    cin.get(ch); // 读取换行符
    while (cin.get(ch) && ch != '\n') { // 读取字符直到遇到换行符
        mp[ch] = 1;
    }
    for (auto i : s) {
        if (mp.find(i) == mp.end()) { // 检查字符是否不在map中,不在就输出
            cout << i;
        }
    }
    return 0;
}