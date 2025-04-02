#include <iostream>
// 虽然这个是第二题，但是也很考察思维和写法，最好用最简单的写法且排除特殊的写法写
// 很值得学习，cnt代表count的缩写，提前把long long给换号，减少代码量，跟着题目的条件一步步来的。
// 这题的break极其重要，必要的剪枝可以加强代码的健壮性
// 这里可以直接做除法得出n对5的最大倍数
using namespace std;
typedef long long ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    int cnt=-1;
    ll n;
    cin>>n;
    for(ll a=n/5;a>=0;a--){
      ll temp = n-a*5;
      if(temp%3==0){
        cnt=temp/3 + a;
        break;              //若省略了这一条则会超时
      }
    }
    cout<<cnt<<endl;
  }
}