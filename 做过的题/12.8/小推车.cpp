#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> arr(5, vector<int>(n + 1));
    vector<int> wei(5, 0);
    
    for(int i = 0; i < 5; i++) { // 标记每行的max
        arr[i][0] = 0;
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            if(arr[i][j] > arr[i][0]) {
                arr[i][0] = arr[i][j];
                wei[i] = j; // 标记位置
            }
        }
    }
    
    for(int i = 0; i < 5; i++) { 
        int qian = 0, hou = 0;
        for(int j = 1; j < wei[i]; j++) {
            qian = max(arr[i][j], qian);
        }
        for(int j = wei[i] + 1; j <= n; j++) {
            hou = max(arr[i][j], hou);
        }
        int xu = min(arr[i][0], qian + hou);
        cout << xu << endl;
    }
}

int main() {
    int t = 1; // 可以修改为 cin >> t 以处理多组数据
    while(t--) solve();
    return 0;
}
