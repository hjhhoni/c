#include <stdio.h>
long long book[1000010][2]={0};

int main() {
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        book[a][0]=1;  //标记数字在A中
    }
    for(int i=1;i<=m;i++){
        int a;
        scanf("%d",&a);
        book[a][1]++;
    }
    int v=0;
   
    for(int i=0;i<=1000010;i++){
        if(book[i][0]==1&&book[i][1]==k) {printf("%d ",i);v=1;}
    }
    if(v==0) printf("-1");
    
}