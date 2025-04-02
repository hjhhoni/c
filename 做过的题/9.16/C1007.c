#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=n;j-i>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}