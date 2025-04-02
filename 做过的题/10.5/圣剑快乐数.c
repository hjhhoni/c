#include <stdio.h>

int main() {
    int n,sum;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(c[i]+c[j]==sum){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
}
