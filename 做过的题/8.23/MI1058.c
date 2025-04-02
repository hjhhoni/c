#include <stdio.h>
int main(){
    //图形输出5
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int t=n-i;t>=1;t--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int q=1;q<=n-i;q++){
            printf(" ");
        }
        for(int j=2*i-1;j>=1;j--){
            printf("%d",i);
        }
        printf("\n");
    }
}