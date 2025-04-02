#include<bits/stdc++.h>
using namespace std;
bool guize(string a,string b){
    return a+b>b+a;  //对于string，a+b可以实现字符串拼接，比较时是比较其每一位的字典序大小
}
int main() { 
    string array[21];int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
   
    sort(array,array+n,guize);
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    
 return 0;
}