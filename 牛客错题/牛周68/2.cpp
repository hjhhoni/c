#include <iostream>
using namespace std;
typedef long long ll;
char a[34][34];
int Max[5]={0};
int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m;        //n行m列对应i,j
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){           //遍历每一个点为左上角
        for(int j=1;j<=m;j++){
            if(a[i][j]=='.'){
                int hen=0;
                for(int js=j;js<=m;js++){
                    if(a[i][js]=='.'){
                        hen+=1;
                        for(int is=i;is<=n;is++){
                            if(a[is][js]=='.'){
                                
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<Max[1]<<" "<<Max[2]<<" "<<Max[3]<<" "<<Max[4];
    return 0;
}