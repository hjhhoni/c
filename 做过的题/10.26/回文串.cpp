#include <iostream>
#include <string>
using namespace std;

// int main() {
//     string a;
//     cin>>a;
//     int len=a.length();
//     for(int i=0;i<len/2;i++){
//         if(a[i]!=a[len-i-1]){
//             cout<<"N";
//             return 0;
//         }
//     }
//     cout<<"Y";
//     return 0;
// }
int main(){
    string a;
    cin>>a;
    if(a==string(a.rbegin(),a.rend()))
    cout<<"Y";
    else
    cout<<"N";    
}
