#include <iostream>
using namespace std;
int n,C,count=0;

int main() {
    
    cin>>n>>C;
    n-=2; //两个符号
    int k=C; 
    for(;k>0;k/=10){
        n--;
    } //数字长度
    n-=2; //两个基本数字
    if (n>=0)
    {
        count+=2;
    }
    int fp=10,f=0,sp=10,s=0;
    for(int i=1;i<=C/2;i++){
        if (n-s-f==0)
        {
            count++;
        }
        if(i%fp==0){
            f++;
            fp*=10;
        }
        if((C-i)%fp==0){
            s++;
            sp*=10;
        }
    }
    if(C%2==0) cout<<count;
    else cout<<count+1;
}