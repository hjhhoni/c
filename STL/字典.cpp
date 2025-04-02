#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string s;cin>>s;
    map<char,int> mp;
    char ch;
    while(cin>>ch) mp[ch]=1;
    for(auto i:s){
        if(mp[i]!=1)cout<<i;
    }
}
// for(auto i=mp.begin();i!=mp.end();i++) cout<<i->first; 遍历