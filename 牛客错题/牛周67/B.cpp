#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    while(n--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll newa=c*b/d;
        if(newa*d>=b*c) newa--;
        cout<<a-newa<<" ";        
    }
   
}
//总结：这种非整除的题根据其情景，有时也可以用整型或者长整型

    

