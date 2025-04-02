// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;
// typedef long long int;

// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<vector<int>> Tree(n + 2); // 使用vector<vector<int>>来存储树的邻接表
//     int c = n - 1;
//     while (c--) // 构建树
//     {
//         int u, v;
//         cin >> u >> v;
//         Tree[u].push_back(v);
//         Tree[v].push_back(u);
//     }
//     sort(Tree.rbegin(),Tree.rend(),[](vector<int>a,vector<int>b){
//         return a.size()>b.size();
//     });
//     cout << Tree[k+1].size() << endl;
//     return 0;
// }

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
    for(ll i=1;i<n;i++)
    {
        cin>>u>>v;
        ve[u].push_back(v);
        ve[v].push_back(u);
        d[u]++;
        d[v]++;
    }
    ll l=0,r=n;
    while(l<r)
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