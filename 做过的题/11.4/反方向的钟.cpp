#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int s,f;
        string c;
        cin>>s>>f;
        if (s>=12)
        {
            c="pm";
        }else
        {
            c="am";
        }
        if (s==0)
        {
            s=12;
        }else if(s!=12&&s!=0)
        {
            s%=12;
        }
        cout<<s<<" "<<f<<" "<<c<<endl;
        
        
    }
    
    return 0;
}