#include <bits/stdc++.h>
using namespace std;
bool pd(int x);
int main(){
    int n,temp=1;
    cin>>n;
    for (int i = 2; i <= n-2; i++) {
        if (pd(i)&&pd(i+2)){
            printf("%d %d",i,i+2);
            printf("\n");
            temp=0;
        }
    }
    if(temp){
        cout<<"empty"<<endl;
    }
}
 
bool pd(int x) {
    for (int i = 2; i <=sqrt(x); ++i) {
        if ((x%i)==0){
            return false;
        }
    }
    return true;
}
 