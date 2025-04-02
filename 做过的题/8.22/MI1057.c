#include <stdio.h>
int main(){
    //图形输出3
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int t=n-i;t>=1;t--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}