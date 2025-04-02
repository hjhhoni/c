#include <iostream>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m;
    char a[10001][21];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    char b[11][21];
    for(int i=0;i<k;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int count=0,arr[10]={0},f=1;
        for(int j=0;j<m;j++){
            if(a[i][j]=='1'){
                for(int v=0;v<k;v++){
                    if(b[v][j]=='1'&&arr[v]==0){
                        arr[v]=1;
                        count++;
                        a[i][j]='0';
                    }else if (b[v][j]=='1'&&arr[v]!=0)
                    {
                        a[i][j]='0';
                    }
                    
                }
            }
            if(a[i][j]!='0'){
                cout<<"-1"<<endl;
                f=0;
                break;
            }
        }
        if(f==0) continue;
        cout<<count<<endl;
    }
    return 0;
}