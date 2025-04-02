#include <iostream>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    int wei=1;
    while (q--)
    {
        int k;
        cin>>k;
        k%=n;
        wei=(wei+k)%5;
    }
    cout<<wei;
    return 0;
}