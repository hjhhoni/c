#include <iostream>
using namespace std;

int main() {
    int n,ci=0;
    cin>>n;
    for(int i=1;i<=n/5;i++){
        for(int j=1;j<=(n-i*5)/2;j++){
            for(int k=1;k<=(n-i*5-j*2);k++){
                if (n-i*5-j*2-k==0)
                {
                    ci++;
                }
                
            }
        }
    }
    cout<<ci;
    return 0;
}