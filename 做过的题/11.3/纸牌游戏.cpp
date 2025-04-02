#include <iostream>
#include <algorithm>
using namespace std;
int a[1001];
int main() {
    int n;
    cin>>n;
    int v=0;
    while (n--)
    {
        cin>>a[v];
        v++;
    }
    sort(a,a+v);
    int jg=0,dk=0,m=1;
    for(int i=v-1;i>=0;i--){
        if (m==1)
        {
            jg+=a[i];
            m=2;
        }else
        {
            dk+=a[i];
            m=1;
        }
        
        
    }
    
    if (jg>dk)
    {
        cout<<"win";
    }else if (jg<dk)
    {
        cout<<"lose";
    }else
    {
        cout<<"draw";
    }
    
    
    
    return 0;
}