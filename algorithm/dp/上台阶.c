#include <stdio.h>
unsigned long long dp[100]; //超出19位，去掉符号位
int main(){
    int n,a;
    scanf("%d",&n);
    //预处理
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    // 通过关系式来计算出 dp[n]
    for (int i = 4; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        printf("%llu\n",dp[a]);
    }

}