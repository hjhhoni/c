#include <iostream>
#include <stdlib.h>
using namespace std;
typedef long long ll;
ll n,m;
char map[1001][1001];
ll cnt = 1e10;
ll step = 0;
int dc[8][2] = {{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{-1,1},{1,-1},{1,1}};
int dd[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};

void dfsc(ll yc,ll xc,ll yd,ll xd);
void dfsd(ll yc,ll xc,ll yd,ll xd){
    if(yc==yd&&xc==xd){
        cnt = min(cnt,step);
        return;
    }

    for(int i=0;i<4;i++){
        ll tyd = yd+dd[i][0],txd = xd+dd[i][1];
        if(tyd>=0&&txd>=0&&tyd<n&&txd<m&&map[tyd][txd]!='#'){
            dfsc(yc,xc,tyd,txd);
        }
    }
    return;
}
void dfsc(ll yc,ll xc,ll yd,ll xd){
    if(yc==yd&&xc==xd){
        cnt = min(cnt,step);
        return;
    }

    for(int i=0;i<8;i++){
        ll tyc = yc+dc[i][0],txc = xc+dc[i][1];
        if(tyc>=0&&txc>=0&&tyc<n&&txc<m&&map[tyc][txc]!='#'){
            step++;
            dfsd(tyc,txc,yd,xd);
            step--;
        }
    }
    return;
}
void solve(){
    cin>>n>>m;
    ll xc,yc,xd,yd;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>map[i][j];
            if(map[i][j]=='D'){
                xd = j;
                yd = i;
            }else if(map[i][j]=='C'){
                xc = j;
                yc = i;
            }             
        }    
    }

    
    dfsc(yc,xc,yd,xd);
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}