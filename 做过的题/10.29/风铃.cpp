#include <iostream>
#include <cmath>
using namespace std;
int isPrime[1000000],Max=0,f=0;
int main() {
    int n;
    cin>>n;
    isPrime[0]=1;
    isPrime[1]=1;
    for (int i=2;i*i<=1e6;i++)  //埃氏筛选法选出素数
    {
        if (!isPrime[i])
        {
            for(int j=i*i;j<=1e6;j+=i){
                isPrime[j]=1;
            }
        }
        
    }
    
    while (n--)
    {
        int k;
        cin>>k;
        int ks=sqrt(k);
        if (k==ks*ks&&!isPrime[ks]) //由题风铃数开方绝对是素数，不然不满足三个因数的条件
        {
            Max=Max>k?Max:k;
            f=1;
        }
        
    }
    if (f==0)
    {
        cout<<"0";
    }else
    {
        cout<<Max;
    }
    
    
    return 0;
}