#include <iostream>
using namespace std;
typedef long long ll;

double f(double x,double n){
    if(n==1) return x/(1+x);
    else return x/(n+f(x,n-1));
}

void solve(){
    double x,n;
    cin>>x>>n;
    double R;
    R = f(x,n);
    printf("%.2lf",R);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}