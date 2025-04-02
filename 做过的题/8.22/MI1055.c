#include <stdio.h>
int main(){
    //图形输出1
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
}