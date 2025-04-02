// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin>>T;
//     while (T--)
//     {
//         long long n;
//         cin>>n;

//     }
    
//     return 0;
// }
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        string minValue = n;

        // 循环移位找最小值
        for (int i = 0; i < n.length(); ++i) {
            // 移动首位到末尾
            rotate(n.begin(), n.begin() + 1, n.end());
            // 取最小值
            if (n[0] != '0') {
                minValue = min(minValue, n);  //依据字典序比较字符串大小
            }
        }

        cout << minValue << endl;
    }
    return 0;
}
