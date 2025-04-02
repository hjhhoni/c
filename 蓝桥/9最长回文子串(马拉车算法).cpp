#include <iostream>
#include <string>
using namespace std;
string ge(string &str){
    string temp='#';
    for(int i=0;str[i];++i){  //string这样子写可以遍历
        temp+=str[i]+='#';   //要用+=，不然是字符串相加
    }
    return temp;
}
int main() {
    string str;
    cin>>str;
    str=ge(str);
    cout<<str;
    return 0;
}