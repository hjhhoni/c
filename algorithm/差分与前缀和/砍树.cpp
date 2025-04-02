#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    long long c[n];
    long long a[n];  //前缀和数组
    for(int i=0;i<n;i++){
        cin>>c[i];
        a[i]=c[i];
    }
    sort(c,c+n);
    sort(a,a+n);
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
    }
    long long min=9e18;
    for(int i=0;i<=n-k;i++){
        if(a[i+k-1]-a[i]-(k-1)*c[i]<min) min=a[i+k-1]-a[i]-(k-1)*c[i];
    }
    cout<<min;
    return 0;
}