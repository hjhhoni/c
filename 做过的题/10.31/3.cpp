#include <iostream>
using namespace std;

int main() {
    int K,L,V;
    cin>>K>>L>>V;
    int op,x,e,l,r;
    long long a[100001]={0},dif[100001]={0},sum=0;
    while (K--)
    {
        cin>>op;
        if (op==0)
        {
            cin>>x>>e;
            for(int i=x;i<=L;i+=V){
                a[i]+=e;
                if (e<0)
                {
                    e++;
                }else
                {
                    e--;
                }
            }
        }else
        {
            cin>>l>>r;
            for(int i=l;i<=r;i++){
                sum+=a[i];
    
            }
      
            cout<<sum<<endl;
        }
    }
    
    return 0;
}