#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
long long a[1000000]={0};
int main() {
    int k;
    cin>>k;
    while (k--)
    {
        int n;
        cin>>n;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long sum1=0,sum2=0,max1=a[n-1],max2=a[0];
        for(int i=n-1;i>=0;i--){
            if(i==0){
                sum2+=a[0];
            }else{
                if (i%2==1)
                {
                    sum1+=a[i];
                }else
                {
                    sum2+=a[i];
                }
            }

            
            
        }
        
        if (max1>max2)
        {
            sum1-=max1;
            sum1+=max2;
            sum2-=max2;
            sum2+=max1;
        }
        if (sum1>sum2)
        {
            cout<<"kou"<<endl;
        }else if (sum1<sum2)
        {
            cout<<"yukari"<<endl;
        }else
        {
            cout<<"draw"<<endl;
        }
        
        
        
    }
    
}