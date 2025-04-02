#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;

// 我靠，可以直接构造回文数，看看在不在s和e之间，s，e是数字
void solve(){
    string s,e;
    cin>>s;
    cin>>e;
    
    int syear = stoi(s.substr(0,4)); 
    int smon = stoi(s.substr(4,2));
    int sday = stoi(s.substr(6,2));

    int eyear = stoi(e.substr(0,4));
    int emon = stoi(e.substr(4,2));
    int eday = stoi(e.substr(6,2));
    ll ans = 0;
    for(int i=syear;i<=eyear;i++){  // 遍历年
        int flag = 0;
        if(i%4==0&&i%100!=0||i%400==0)flag = 1; //是闰年
        int startmon = 1,endmon = 12;
        if(i==syear) startmon = smon;
        if(i==eyear) endmon = emon;
        for(int j=startmon;j<=endmon;j++){  // 遍历月
            int startday = 1,endday;
            if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) endday = 31;
            else if(j==4||j==6||j==9||j==11) endday = 30;
            else endday = flag?29:28; //真左假右
            if(i==syear&&j==smon) startday = sday;
            if(i==eyear&&j==emon) endday = eday;
            for(int k=startday;k<=endday;k++){  // 遍历日
                string v = "",u = "";
                if(j<10) v = "0";
                if(k<10) u = "0";
                string str = to_string(i)+ v + to_string(j) + u + to_string(k);
                if(str==string(str.rbegin(),str.rend())) ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t;
    while(t--) solve();
    return 0;
}