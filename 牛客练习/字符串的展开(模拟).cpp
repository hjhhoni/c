#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;
// ASCII码 A-65 a-97 0-48

void solve(){
    int p1,p2,p3;
    cin>>p1>>p2>>p3;  //p1为填充内容，p2为每个重复次数，p3为是否反转
    string s,ans;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){  //遇到-时，判断前后是否为数字或字母，且右大于左则展开，否则直接加入ans
            if((isdigit(s[i-1])&&isdigit(s[i+1])&&s[i+1]>s[i-1])||(isalpha(s[i-1])&&isalpha(s[i+1])&&s[i+1]>s[i-1])){
                string tmp;
                if(p1==3){
                    int shu = int(s[i+1]) - int(s[i-1]) - 1;
                
                    shu*=p2;
                    for(int j=0;j<shu;j++){
                        tmp+='*';
                    }
                }else{
                    if(isdigit(s[i+1])){  //数字
                        int v = s[i-1] - '0' + 1;
                        for(;v<s[i+1]-'0';v++){
                            for(int j=0;j<p2;j++){
                                tmp+=char(v);
                            }
                        }
                    }else{  //字母
                        if(p1==1){  //小写
                            for(int j=s[i-1]+1;j<s[i+1];j++){
                                for(int k=0;k<p2;k++){
                                    tmp+=char(j);
                                }
                            }
                        }else{   //大写
                            for(int j=s[i-1]+1-32;j<s[i+1]-32;j++){
                                for(int k=0;k<p2;k++){
                                    tmp+=char(j);
                                }
                            }
                        }
                    }
                }
                if(p3==2){  //反转
                    reverse(tmp.begin(),tmp.end());
                }
                ans+=tmp;
            }else{
                ans+=s[i];
            }
        }else{
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;//cin>>t
    while(t--) solve();
    return 0;
}