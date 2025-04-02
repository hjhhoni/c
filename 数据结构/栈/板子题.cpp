#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) { // 栈非空且第一个与字符串的当前元素相同
            st.pop();
        } else {
            st.push(c);
        }
    }
    int m = st.size();
    cout << m / 2 << endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;cin>>t;
    while(t--) solve();
    return 0;
}

// ### 题目描述
// 小苯有一个长度为n，仅由字符‘0’和‘1’构成的字符串 s，下标从1开始。
// 小苯觉得s长度过长，希望用“消除”操作缩短长度。“消除”操作：若存在 \(1\leq i < |s|\) 使 \(s_i = s_{i + 1}\)，可消除 \(s_i, s_{i + 1}\) 这两个字符，其余字符按原顺序拼接。
// 在“消除”操作前，小苯可进行“修改”操作：选择任意位置字符，改为‘0’或‘1’。
// 现在，小苯想知道至少进行几次“修改”操作，才能通过“消除”操作使s的长度不超过1 。

// ### 输入描述
// 每个测试文件有多组测试数据。第一行输入整数 \(T(1\leq T\leq 10^3)\) 表示数据组数。每组测试数据：
// - 第一行输入正整数 \(n(1\leq n\leq 10^6)\) 表示字符串 s 的长度。
// - 第二行输入长度为 n，仅由‘0’和‘1’构成的字符串 s。
// 此外，保证单个测试文件的 n 之和不超过 \(10^6\)。

// ### 输出描述
// 对于每组测试数据，新起一行，输出一个整数，表示至少需要进行的“修改”操作的次数。 