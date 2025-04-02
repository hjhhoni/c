#include <iostream>
using namespace std;

int main() {
    int a,b,most[2]={0};
    for(int i=1;i<=7;i++){
        cin>>a>>b;
        if (a+b>8)
        {
            if (a+b>most[0])
            {
                most[0]=a+b;
                most[1]=i;
            }
            
        }
        
    }
    cout<<most[1];
    return 0;
}