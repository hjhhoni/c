#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;



int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;
    cin>>s;
    ll fir,sec;
    int index=s.find('.');
    int index1 = index-2;
    int k = s.find('.');
    while (s[index]=='.'||s[index]==',')
    {
        index++;
    }
    while (s[index1]!=',')
    {
        index1--;
    }
    index1++;
    string se,fi;
    for(;index<s.size();index++) se+=s[index];
    for(;index1<k;index1++) fi+=s[index1];
    fir = stoll(fi);
    sec = stoll(se);
    cout<<sec-fir-1;

    return 0;
}