#include <bits/stdc++.h>
//https://www.lanqiao.cn/problems/1217/learning/?problem_list_id=30&page=1
using namespace std;
typedef long long ll;
const double eps = 1e-12;  //精度，大多数情况都可以得到正确答案
int main(){
    int T = 1;
    cin >> T;
    while (T--)
    {
        double n;
        cin >> n;
        double l = 0, r = 100000, res = 0;
        while (l <= r) //二分法查找答案
        {
            double mid = (l + r) / 2;
            if (fabs(mid * mid * mid - n) <= eps)//满足精度 ，注意fabs函数，用来取浮点数绝对值
            {
                res = mid;
                break;
            }
            if (mid * mid * mid > n) r = mid - 0.0001;
            else if (mid * mid * mid < n) l = mid + 0.0001, res = mid; //当满足条件不满足精度时返回一个近似值
        }
        cout << setprecision(3) << fixed << res << endl; //setprecision(3)函数用来保留有效数字，fixed用来防止浮点数科学计数法，setprecision伴随fixed使用
    }
}