#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;string s;cin>>n>>s;
  vector<int>b;int wei=0,sum=0; // 小数点的位置
  for(int i=s.size()-1;i>=0;i--){  //逆序把小树插入b，方便进位
    if(s[i]!='.'){
      b.push_back(s[i]-'0');
    }else{
      wei = sum;  //记录小数点位置
    }
    sum++;
  }
  while(n--){  // 模拟乘以2的n次方
    int t =0; // 进位数
    for(int i=0;i<b.size();i++){ // 从个位开始
      b[i]=b[i]*2+t;
      if(b[i]>=10){
        t = b[i]/10;
        b[i]%=10;
      }else{
        t = 0;
      }
    }
    if(t) b.push_back(t); // 进位
  }

  if(b[wei-1]>=5){  // 模拟四舍五入
    int t=1;
    for(int i=wei;i<=b.size()-1;i++){
      b[i] = b[i]+t;
      if(b[i]>10){   // 如果产生进位
        t = b[i]/10;
        b[i]%=10;
      }else{
        t=0;
        break;
      }
    }
    if(t) b.push_back(t);
  }
  for(int i=b.size()-1;i>=wei;i--) cout<<b[i];
  // cout<<" "<<wei<<endl;

  return 0;
}