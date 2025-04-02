#include <stdio.h>
long long dp[40];
int main() {
    dp[0]=1;
    dp[1]=1;
    dp[2]=1;

    for(int i=3;i<=40;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d ",dp[i]);
    }

}
