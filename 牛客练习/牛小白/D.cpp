#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;
set<ll> s;
ll n,a[100005];
ll ans;
int main()
{
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>a[i],s.insert(a[i]);
    auto ed=s.end();
    ed--;
    if(*ed==*s.begin())
        cout<<"0\n";
    else if(*s.begin()!=0)
        cout<<"-1\n";
    else
    {
        sort(a+1,a+1+n);
        ans=1;
        for(ll i=2;i<=n;i++)
            ans+=max(0ll,a[i]-a[i-1]-1);
        cout<<ans;
    }
    return 0;
}