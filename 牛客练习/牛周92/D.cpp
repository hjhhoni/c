#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
ll k,p,q;
ll x,y;
int main()
{
    cin>>k;
    for(ll i=2;i*i<=k+1;i++)
    {
        if((k+1)%i==0)
            y=i;
    }
    if(!y)
        cout<<"-1";
    else
    {
        x=y-1;
        y=(k+1)/y-1;
        cout<<x+y<<" "<<x*y;
    }
    return 0;
}