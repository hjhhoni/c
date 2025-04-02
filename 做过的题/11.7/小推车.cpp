#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[5]={0};
    for(int i=0;i<5;i++){
        for(int j=1;j<=n;j++){
            int b;
            cin>>b;
            if(j!=n)a[i]=max(a[i],b);
        }
        cout<<a[i]<<endl;
    }
    return 0;
}