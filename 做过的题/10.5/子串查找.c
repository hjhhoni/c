#include <stdio.h>
#include <string.h>
int main() {
    char A[200],B[200];
    scanf("%s",A);
    scanf("%s",B);
    int la=strlen(A),lb=strlen(B),sum=0;
    for(int i=0;i<=la-lb;i++){
        int is=0;
        for(int j=i;j<=i+2;j++){
            if(A[j]!=B[is]){
                break;
            }
            if(j==i+2){
                sum++;
            }
            is++;
        }
    }
    printf("%d",sum);
}
