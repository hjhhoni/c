#include <bits/stdc++.h>
using namespace std;
// typedef long long ll
#define ll long long
int main()
{
  ll cnt = 0;
  ll x = 1;ll n;cin>>n;
  for(;x<=n;x++){
    int v=x;
    int f = 1;
    while(v){
      int vv = v%10;
      if(f){  // 个百。。。
        f = 0;
        if(vv%2==0){
          f = 3;
          break;
        }
      }else{  // 十千。。。
        f = 1;
        if(vv%2==1){
          f = 3;
          break;
        }
      }
      v/=10;
    }
    if(f==0||f==1) cnt++;
  }
  cout<<cnt;
  return 0;
}
// https://www.lanqiao.cn/problems/19709/learning/
// 一个整数如果按从低位到高位的顺序，奇数位 (个位、百位、万位 
// ⋯
// ⋯ ) 上的数字是奇数，偶数位 (十位、千位、十万位 
// ⋯
// ⋯ ) 上的数字是偶数，我们就称之为 “好数”。

// 给定一个正整数 
// N
// N，请计算从 1 到 
// N
// N 一共有多少个好数。