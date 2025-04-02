#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int sum=m;
    for(int i=m+1;i<=n;i++){
        sum^=i;
    }
    cout<<sum;
    return 0;
}