#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[20];
    int count = 0;

    // 输入单词，直到遇到'#'
    for (;;) {
        cin >> words[count];
        if (words[count][0] == '#') {
            break;
        }
        count++;
    }

    // 使用插入排序按长度从小到大排序
    for (int i = 1; i < count; i++) {
        string key = words[i];
        int j = i - 1;
        
        while (j >= 0 && words[j].length() > key.length()) {
            words[j + 1] = words[j];
            j--;
        }
        words[j + 1] = key;
    }

    // 输出排序后的单词
    for (int i = 0; i < count; i++) {
        cout << words[i];
        if (i < count - 1) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
