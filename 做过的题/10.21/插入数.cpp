#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    
    while (cin>>n>>m,n||m)
    {
        int arr[n+1];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        arr[n]=m;
        sort(arr,arr+n+1);
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
    
}