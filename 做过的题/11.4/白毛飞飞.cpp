#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.tie(0),cout.tie(0);
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if (a[i]>i+1)
        {
            cout<<"NO";
            return 0;
        } 
    }
    cout<<"YES";
    return 0;
}