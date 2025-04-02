#include <stdio.h>
long long dp[31];
int main() {
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    dp[4]=3;
    dp[5]=4;
    for(int i=6;i<=30;i++){
        dp[i]=dp[i-1]+dp[i-3];
    }
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",dp[n]);
    }
    
}
