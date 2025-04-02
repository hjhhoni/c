#include <iostream>
#include <cmath>
#include <iomanip>  //数据类型
using namespace std;
double fee(int n){
    if(n%70==0) return n/70*0.1;
    else return (n/70+1)*0.1;
}
int main(){
    int n,m;
    double sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
       cin>>m;
       sum+=fee(m); 
    }
    cout<<fixed<<setprecision(1)<<sum;
    return 0;
}