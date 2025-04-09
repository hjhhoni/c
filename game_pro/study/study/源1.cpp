#include <iostream>
using namespace std;
#define MAXN 200010
int G[MAXN][MAXN];
int main()
{
    int n, m;cin >> n >> m;

    // memset(G,0,sizeof(G));
    while (m--) {
        int op, x, y;cin >> op >> x >> y;
        if (op == 2) {
            if (G[x][y]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            G[x][y] = 1;
            G[y][x] = 1;
        }
    }
    return 0;
}