#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int xor_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        xor_sum ^= a[i];
    }

    if (xor_sum != 0) {
        cout << "YES" << endl;  // 先手必赢
    } else {
        cout << "NO" << endl;   // 先手必输
    }

    return 0;
}
