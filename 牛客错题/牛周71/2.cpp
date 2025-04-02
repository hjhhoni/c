#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len = s.length();
    int count = 0;  //摘掉数
    int wei = 0; //当前位置
    int bi = 1; //对比位置
    int step = 1; //步幅
    int m = 1; //状态
    // erase(pos, 1);
    while(m){
        if(len==2){
            if(s[0]!=s[1]){
                printf("-1\n");
            }else{
                printf("0\n");
            }
            m = 0;
        }
        if(s[wei]==s[bi]){  //可以断时
            printf("%d\n",step-1);
            m = 0;
        }else{  //不能下一个
            wei = (wei + 1)%len;
            if(wei==0) step++; //轮完一圈step+1
            if(step==len){
                printf("-1\n");
                m=0;
            }
            bi = (wei + step)%len;
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}