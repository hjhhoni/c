#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,t;
    cin>>s;
    cin>>t;
    if (s.find(t)!='npos')
    {
        cout<<s.find(t);
    }else{
        cout<<-1;
    }
    
    return 0;
}