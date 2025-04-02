#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        map<int,int>mp;
        ll a1 = 0,a2;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            mp[x]++;
            if(mp[x]==1&&a1==0) a1=x;
            else if(mp[x]==1&&a1!=0) a2=x;
        }
        if(mp.size()==2&&mp[a1]==mp[a2]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    


    return 0;
}