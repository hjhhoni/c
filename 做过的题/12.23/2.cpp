#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(){
    vector<string> res;
    string s,a,b;
    getline(cin, s);
    stringstream ss(s);
    cin>>a;
    cin>>b;

    // 使用 stringstream 按空格提取单词
    string word;
    while (ss >> word) {
        res.push_back(word);
    }
    for (int i = 0;i<(int)res.size();i++)
    {
        if(res[i]==a){
            cout<<b<<" ";
            continue;
        }
        cout<<res[i]<<" ";
    }
    
}
