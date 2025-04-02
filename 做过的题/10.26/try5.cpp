#include <iostream>
using namespace std;

int main() {
    int n;
    long long m;
    cin>>n;
    cin>>m;
    if (m<n)
    {
        if(n==m*2){
            for(int i=1;i<=n;i++){
                if(i%2==0) cout<<"0";
                else cout<<"1";
                cout<<" ";
            }
        }else
        {
            cout<<"-1";
        }
    }else if (m==n)
    {
        for(int i=1;i<=n;i++){
            switch (i%4)
            {
            case 0: cout<<"1";break;
            case 1: cout<<"0";break;
            case 2: cout<<"1";break;
            case 3: cout<<"2";break;
            }
            cout<<" ";
        }
    }else
    {
        int c=m/n;
        if(m%n==n/2){
            for(int i=1;i<=n;i++){
                if(i%2==0) cout<<c;
                else cout<<c+1;
                cout<<" ";
            }
        }else
        {
            cout<<"-1";
        }
        

    }
    
    
    
    return 0;
}