#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if (a[2]>a[1]+a[0])
    {
        cout<<a[2];
    }else
    {
        cout<<a[0]+a[1];
    }
    
    

    return 0;
}