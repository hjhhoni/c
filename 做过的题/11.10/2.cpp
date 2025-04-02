#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while (n--)
    {
        long double a,b,c,d,k;
        cin>>a>>b>>c>>d;
        k=a;
        a=(b*c)/d;
        cout<<k-(a-1)<<" ";
    }
    
    return 0;
}