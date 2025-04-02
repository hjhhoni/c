#include <iostream>
using namespace std;

int main() {
    int L,M,shu=0;
    cin>>L>>M;
    int arr[10010]={0};
    int a,b;
    for(int i=1;i<=M;i++){
        cin>>a>>b;
        arr[a]+=1;
        arr[b+1]-=1;
    }
    for(int i=1;i<=L;i++){ //前缀和
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<=L;i++){
        if (arr[i]==0)
        {
            shu++;
        }
    }
    cout<<shu;
    return 0;
}