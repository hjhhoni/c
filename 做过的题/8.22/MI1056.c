#include <stdio.h>
int main(){
    //图形输出2
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int t=n-i;t>=1;t--){
            printf(" ");
        }
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
}