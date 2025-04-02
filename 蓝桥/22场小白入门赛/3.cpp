#include <iostream>
using namespace std;
typedef long long ll;
int a[100010][6],mk[6];
int main(){
  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=5;j++){
      cin>>a[i][j];
    }
  }

  for(int i=1;i<=5;i++){
    int cnt=0;  //与mk[i]对比
    for(int j=1;j<=n;j++){
      int f=0;    //记录改行是否出现目标
      for(int k=1;k<=5;k++){
        if(a[j][k]==i){
          cnt++;
          f=1;
          break;    //必要的剪枝
        }
      }
      if(f==0){    //说明改行没有目标，断掉了
        mk[i]=max(mk[i],cnt);
        cnt=0;
      }
      if(j==n) mk[i]=max(mk[i],cnt); //处理特殊，及n行全部连续，没有除法断点记录，补上记录
      //错误原因，用cnt==n做条件导致如从第二行到第n行都连续就不会更新了，直接出错
    }
  }

  for(int i=1;i<=5;i++) cout<<mk[i]<<" ";
}

