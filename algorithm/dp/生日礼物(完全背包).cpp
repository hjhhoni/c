#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
 
const int N = 100010;
 
int dp[N],a[100001],b[100001];
 
int main()
{
    int v=0;
    //标记平方数和立方数
    for(int i=1;i*i<=100000;i++){
        if (!a[i*i])
        {
            a[i*i]=1;
            b[v]=i*i;
            v++;
        }
    }
    for(int i=1;i*i*i<=100000;i++){
        if (!a[i*i*i])
        {
            a[i*i*i]=1;
            b[v]=i*i*i;
            v++;
        }
    }
    sort(b,b+v);
    memset(dp, 0x3f, sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=100000;i++){
        for(int j=v-1;j>=0;j--){
            if (b[j]<=i)
            {
                dp[i]=min(dp[i],dp[i-b[j]]+1);
            }
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
	return 0;
}