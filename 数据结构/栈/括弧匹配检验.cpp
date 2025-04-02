#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<char> s; // 定义一个栈来存储左括号
    string str;
    getline(cin, str); // 读入表达式
    for (int i = 0; i < str.size(); i++) { // 遍历表达式中的每个字符
        if (str[i] == '(' || str[i] == '[') s.push(str[i]); // 如果当前字符是左括号，则将其压入栈中
        else if (str[i] == ')') { // 如果当前字符是右圆括号
            if (s.empty() || s.top() != '(') { // 如果栈为空或栈顶元素不是左圆括号，则说明括号不匹配
                cout << "Wrong" << endl;
                return 0;
            }
            s.pop(); // 弹出栈顶元素
        } else if (str[i] == ']') { // 如果当前字符是右方括号
            if (s.empty() || s.top() != '[') { // 如果栈为空或栈顶元素不是左方括号，则说明括号不匹配
                cout << "Wrong" << endl;
                return 0;
            }
            s.pop(); // 弹出栈顶元素
        }
    }
    if (s.empty()) cout << "OK" << endl; // 如果栈为空，则说明括号匹配
    else cout << "Wrong" << endl; // 否则说明括号不匹配
    return 0;
}