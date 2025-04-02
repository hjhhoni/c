#include <iostream>
using namespace std;

long long max_or(long long a[], int n) {
    long long result = 0;
    for (int i = 0; i < n; ++i) {
        result |= a[i];
    }
    return result%1000000007; //位或一个数组出来的合并位或运算数是最大的
}

int main() {
    int n;
    cin >> n;
    long long a[1001];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long max_value = max_or(a, n);
    long long sum = 1;

    for (int i = 0; i < n; i++) {
        sum = (sum * max_value) % 1000000007;
    }

    cout << sum << endl;
    return 0;
}
