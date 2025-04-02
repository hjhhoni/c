#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e9+7;


int main() {
    int l,K;
    string A;
    string B;
    cin >> l; //位数  6
    cin >> A; //数字 526430
    cin >> K; //第K位  4
    K = l - K;  //2
  
    ll wei = A.size()-1;  //个位5
    int mark = 0;
    while (wei>=K)
    {
        if(A[wei]!='0'){ //如果当前位不为0
            if(mark==0){
                int b = A[wei]-'0';
                B+= 10 - b + 48;
                mark = 1;
            }else{
                int b = A[wei]-'0';
                B+= 9 - b + 48;
            }
            
        }else{
            if(mark==0){
                B+='0';
            }else{
                B+='9';
            }
            
        }
        wei--;
    }
    if(A[K]=='0'&&mark==0){
        cout<<"-1";
        return 0;
    }
    reverse(B.begin(), B.end()); 
    // 去掉前导0
    B.erase(0, B.find_first_not_of('0'));
    cout<<B<<endl;
    
    return 0;
}