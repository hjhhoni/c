#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    if (n<m) 
    {
        int temp=n;
        n=m;
        m=temp;
    }
    
    while (m!=0) //辗转相除法，先对小的数求余
    {
        int temp=m;
        m=n%m;
        n=temp;
    }
    cout<<n;
    return 0;
}