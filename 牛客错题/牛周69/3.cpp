#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

// 计算两个数的最大公约数
ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算三个数的最大公约数
ll gcd(ll a, ll b, ll c) {
    return gcd(a, gcd(b, c));
}

void solve() {
    int n, h;
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        ll x, y, z;
        cin >> x >> y >> z;
        ll dx = x, dy = y, dz = z - 2 * h;
        ll g = gcd(dx, gcd(dy, dz));
        if(g<0) g=-g;
        // 确保所有分量为正数
        if (dx < 0) dx = -dx;
        if (dy < 0) dy = -dy;
        if (dz < 0) dz = -dz;
        cout << dx / g << " " << dy / g << " " << dz / g << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1; // cin >> t;
    while (t--) solve();
    return 0;
}