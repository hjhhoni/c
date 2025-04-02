#include <iostream>
using namespace std;
int arr[9][9],count=0,xz[16],xy[16],h[9],l[9];
void dfs(int y,int x){

    
    if(h[y]==0&&l[x]==0&&xz[8-x+y]==0&&xy[x+y-1]==0&&arr[y][x]==0){
        h[y]=1,l[x]=1,xz[8-x+y]=1,xy[x+y-1]=1;
        arr[y][x]=1;
    }else{
        return;
    }
    if(y==8){
        count++;
        cout<<"No."<<" "<<count<<endl;
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                if(arr[j][i]==1) cout<<"1"<<" ";
                else cout<<"0"<<" ";
            }
            cout<<endl;
        }
        h[y]=0,l[x]=0,xz[8-x+y]=0,xy[x+y-1]=0;
        arr[y][x]=0;
        return;
    }
    y+=1;
    for(int i=1;i<=8;i++){
        dfs(y,i);
    }
    y-=1;
    arr[y][x]=0;
    h[y]=0,l[x]=0,xz[8-x+y]=0,xy[x+y-1]=0;
    return;
}
int main() {
    for(int i=1;i<=8;i++){
        dfs(1,i);
    }
    return 0;
}