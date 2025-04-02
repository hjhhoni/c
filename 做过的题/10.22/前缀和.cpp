#include <iostream>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=q;i++){
        long long a,b;
        cin>>a>>b;
        long long sum=0;
        for(long long j=a;j<=b;j++){
            sum+=arr[j-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}