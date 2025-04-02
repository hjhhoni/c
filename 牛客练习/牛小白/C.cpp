#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
int f = 0;
void solve(){
    int q; cin >> q;
    vector<ll> vc;
    int v=q;
    while (q--)
    {
        int k; cin >> k;
        ll l=1e9;
        while (k--)
        {
            ll i; cin >> i;
            if(i<l){
                f += 1;
            }
            vc.push_back(i);
            l = i;
        }
    }
    sort(vc.begin(), vc.end());
    ll l = vc[0];

    for(int i=1; i<vc.size(); i++){
        if(vc[i] == l|| vc[i] != l+1){
             f += 1*v;
//             cout<<"Q"<<endl;
             break;
        }
        l = vc[i];
    }
//     cout<<f<<endl;
    if(f>1*v) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}