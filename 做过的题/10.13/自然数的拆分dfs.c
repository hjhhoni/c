#include <stdio.h>
long long sum=0;
int book[51]={0};
void dfs(int n,int s,int i,int depth){
    if(s==n) {
        sum++;
        printf("%d=",n);
        for(int i=1;i<depth;i++){
            printf("%d",book[i]);
            if(i!=depth-1) printf("+");
        }
        printf("\n");
        return;
    }

    for(int j=i;j<n;j++){
        if(s+i>n) return;
        book[depth]=j;
        dfs(n,s+j,j,depth+1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    dfs(n,0,1,1);
    printf("total=%lld",sum);
}
