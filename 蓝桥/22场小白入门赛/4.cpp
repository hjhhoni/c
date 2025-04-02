#include <iostream>
using namespace std;
typedef long long ll;
const int N=1e5+10;  //细节+10转为整形
ll a[N];        //细节ll保证不报数据，或者防止数据欺骗
ll minn=1e19;  //min是关键保留字，故minn
void solve(){               //好习惯分开输入与解决函数
  int n;cin>>n;
  ll sum=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    minn=min(minn,a[i]);
    sum+=a[i];
  }
  cout<<sum-minn*n;
}

int main(){
  int t=1;
  while(t--){
    solve();
  }
}