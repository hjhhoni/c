#include <iostream>
using namespace std;
long long dp[1000000];
int main(){
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i=3;i<=1e6;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        cout<<dp[a]%1000<<endl;
    }
}