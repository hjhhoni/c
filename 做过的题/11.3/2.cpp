#include <iostream>
#include <cstring>
using namespace std;
int n,m,book[200010],box[200010];
void dfs(int depth){
    if (depth==n+1)
    {
        int f=0;
        for(int i=2;i<=n;i++){
            int a1=box[i-1]+box[box[i-1]];
            int a2=box[i]+box[box[i]];
            int a3=box[i+1]+box[box[i+1]];
            if (a1>a2&&a2>a3)
            {
                f=1;
            }else
            {
                f=0;
                break;
            }  
        }
        if (f==1)
        {
            for(int i=1;i<=n;i++){
                cout<<box[i]<<" ";
            }
            cout<<endl;
            m=1;
        }
        return;
    }
    
    for(int i=1;i<=n;i++){
        if (book[i]==0)
        {
            book[i]=1;
            box[depth]=i;
            dfs(depth+1);
            box[depth]=0;
            book[i]=0;
        }
    }
    return;
}
int main() {
    int t;
    cin>>t;
    while (t--)
    {
        m=0;
        cin>>n;
        memset(book,0,sizeof(book));
        memset(box,0,sizeof(box));
        for(int i=1;i<=n;i++){
            book[i]=1;
            box[1]=i;
            for(int j=1;j<=n;j++){
                if(book[j]==0){
                    book[j]=1;
                    box[2]=j;
                    dfs(3);
                    box[2]=0;
                    book[j]=0;
                }
            }
            book[i]=0;
        }
        
        if(m==0) cout<<"-1"<<endl;
    }
    
    return 0;
}