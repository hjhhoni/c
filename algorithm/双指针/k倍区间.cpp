#include <iostream>
using namespace std;
int a[100010];
int main() {
    int N,K,ans=0;
    cin>>N>>K;
    for(int i=1;i<=N;i++){ //直接转化为前缀和数组
        cin>>a[i];
        a[i]+=a[i-1];
    }
    int l=0,r=1;
    while (l<=N)
    {
        if ((a[r]-a[l])%K==0)
        {
            ans++;
        }
        r++;
        if (r>N)
        {
            l++;
            r=l+1;
        }
        
    }
    cout<<ans;
    return 0;
}