#include<iostream>
#include<vector>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
ll n,k;
ll u,v;
ll yx[200005];
bool vis[200005];
ll d[200005];
vector<ll> ve[200005];
ll ans;
stack<pll> st;
int main()
{
    cin>>n>>k;
    for(ll i=1;i<n;i++)  //邻接表构建树
    {
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
        d[u]++;
        d[v]++;
    }
    ll l=0,r=n;
    while(l<r) // 二分标志
    {
        ll mid=(l+r)>>1;
        ll need=0;
        for(ll i=1;i<=n;i++)
        {
            vis[i]=false;
            yx[i]=1;
        }
        st.push({1,0});
        while(!st.empty())
        {
            auto [x,f]=st.top();
            st.pop();
            if(!vis[x])
            {
                st.push({x,f});
                vis[x]=true;
                for(auto i:ve[x])
                    if(i!=f)
                        st.push({i,x});
            }
            else
            {
                for(auto i:ve[x])
                    if(i!=f)
                        yx[x]+=yx[i];
                if(yx[x]>mid)
                {
                    need++;
                    yx[x]=0;
                }
            }
        }
        if(need<=k)
            r=mid;
        else
            l=mid+1;
    }
    cout<<r;
    return 0;
}