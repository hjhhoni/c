#include <iostream>
typedef long long ll;
using namespace std;

int MOD = 998244353;
ll fm(ll a,ll b){   //快速幂求模
    ll res=1%MOD;
    a%=MOD;
    while (b>0)
    {
        if (b%2==1)
        {
            res=(res*a)%MOD;
        }
        a=(a*a)%MOD;
        b/=2;
    }
    return res;
}
int main() {
    ll n;
    cin>>n;

    ll sum;
    if(n%2==1) sum=(4+5)*n*2+(((n-1)/2)-2)*n*6*2;
    else sum=(4+5)*n*2+(((n/2)-1-2)*n+n/2)*6*2;
    cout<<((sum%MOD)*(fm(n*(n-1),MOD-2)%MOD))%MOD;
    
    
}
