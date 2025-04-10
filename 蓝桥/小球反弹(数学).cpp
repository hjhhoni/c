#include <bits/stdc++.h>
using namespace std;
int main(){
        long long t=1,x=343720,y=233333;
        while(1){
            if((15*t)%x==0&&(17*t)%y==0) break;
            t++;
        }//往右延长同样的长方形 当走到第t个长方形的左上角 就算是回到了左上角了
        printf("%.2f",2*sqrt(15*15*t*t+17*17*t*t));//如果小球刚好射向角落，则按入射方向原路返回因此*2
  return 0;
}
// https://www.lanqiao.cn/problems/19732/learning/
// 分速度dx:dy=15:17，故求一个整数t，最后再次回到左上角会使得15*t是x的倍数，17*t是y的倍数，则t就是所求的整数，最后再求出距离即可。根据s=vt，则s=15*t*15*t+17*t*17*t，开根号为合速度的路程，又因反弹，s应该*2。