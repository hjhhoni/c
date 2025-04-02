#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    string a, b;
    
    getline(cin, s);  // 读取整行字符串
    cin >> a >> b;    // 读取待替换的字符串和替换字符串

    // 使用ostringstream构建结果字符串
    ostringstream result;
    size_t pos = 0;

    // 查找指定字符串并进行替换
    while ((pos = s.find(a, pos)) != string::npos) {
        result << s.substr(0, pos) << b; // 追加找到的字符串前部分和替换字符串
        pos += a.size();                 // 更新位置
        s = s.substr(pos);               // 更新待查找字符串
        pos = 0;                         // 重新开始查找
    }
    result << s; // 追加剩余部分

    cout << result.str() << endl; // 输出最终结果
    cin.get();

    return 0;
}
