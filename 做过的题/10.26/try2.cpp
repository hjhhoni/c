#include <iostream>
using namespace std;

int main() {
    int n,x,count=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d=0;
    for(int i=1;i<n;i++){
        if (a[i]!=-999&&a[i-1]!=-999)
        {
            if (a[i]-a[i-1]>=x)
            {
                count++;
            }            
        }else
        {
            if (a[i]==-999&&a[i-1]==-999)
            {
                if(100>=x) count++;d++;
            }else if (a[i]==-999&&a[i-1]!=-999)
            {
                if (a[i-1]>=0)
                {
                    if (a[i-1]+50>=x)
                    {
                        count++;d++;
                    }
                    
                }else
                {
                    if (-a[i-1]+50>=x)
                    {
                        count++;d++;
                    }
                }      
            }else if (a[i]!=-999&&a[i-1]==-999)
            {
                if (a[i]>=0)
                {
                    if (a[i]+50>=x)
                    {
                        count++;d++;
                    }
                    
                }else
                {
                    if (-a[i]+50>=x)
                    {
                        count++;d++;
                    }
                }
            }  
        }  
    }
    cout<<count<<' '<<count-d+1;
    return 0;
}