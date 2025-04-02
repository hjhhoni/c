#include <iostream>
#include <algorithm> // 包含 std::fill
#include <iomanip>
using namespace std;
typedef long long ll;
double a[2001],ban[2001];
int main() {
    int n,m;
    cin>>n>>m;
    //封住两边
    ban[0]=1;
    ban[n+1]=1;   
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ban[i]=1;
    }
    while (m--)
    {
        int op;
        cin>>op;
        if (op==1)
        {
            int l,r;
            cin>>l>>r;
            while (ban[l-1]==0)
            {
                l--;
            }
            while (ban[r+1]==0)
            {
                r++;
            }
            
            double sum=0;
            for(int i=l;i<=r;i++){
                sum+=a[i];
                ban[i]=0;
            }
            sum/=(r-l+1);
            fill(a + l, a + r+1, sum);
        }else if (op==2)
        {
            int i;
            cin>>i;
            cout<<fixed << setprecision(10)<<a[i]<<endl;
        }
        
        
    }
    
    return 0;
}