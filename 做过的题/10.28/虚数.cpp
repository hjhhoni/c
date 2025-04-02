#include <iostream>
#include <iomanip> //调整输出格式，控制小数点位，数字宽度和填充
#include <cmath>

using namespace std;

// 判断一个浮点数是否接近于0
bool isZero(double x) {
    return abs(x) <= 1e-6;
}

int main() {
    double e1, e2;
    cin >> e1 >> e2;

    // 输出实部，保留一位有效数字
    cout << fixed << setprecision(1) << e1 << endl;

    // 输出虚部，保留一位有效数字
    cout << fixed << setprecision(1) << e2 << endl;

    // 输出复数
    if (e1)
    {
        cout << fixed << setprecision(1) << e1;
    }
    
    
    if (!isZero(e2)) {
        if(e1){
            cout << (e2 > 0 ? "+" : "");
        }
        
        cout<< e2 << "i";
    }
    if (e1==0&&e2==0)
    {
        cout<<e1;
    }
    
    cout << endl;

    return 0;
}
