#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<int,int>P;
int xu[1000001]={0};
P a[1000001];

int main() {
    int n,v=0;
    cin>>n;
    for(int i=0;i<n;i++){
        v++;
        P temp;
        cin>>temp.first;
        temp.second=v;  //序号
        a[i]=temp;
    }
    sort(a,a+v);

    long long Max=0,m=0,k=0;
    v--;
    for(;;v--){
        m++;
        if(m*m*a[v].first>=Max){
            Max=m*m*a[v].first;
            xu[k]=a[v].second;
            k++;
        }else
        {
            break;
        }
        
    }
    cout<<m-1<<endl;
    sort(xu,xu+k);
    for(int i=0;i<k;i++){
        cout<<xu[i]<<" ";
    }
    return 0;
}