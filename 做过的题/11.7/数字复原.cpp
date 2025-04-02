#include <iostream>
using namespace std;

int main() {
    int n;
    // cout<<sum<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        if((i|n)==n) cout<<i<<endl;
    }
    return 0;
}