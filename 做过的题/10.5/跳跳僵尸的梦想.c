#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int c[n],cc[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    for(int i=1;i<n;i++){
        cc[abs(c[i]-c[i-1])]=1;
    }
    for(int i=1;i<=n-1;i++){
        if(cc[i]!=1){
            printf("Not jolly");
            return 0;
        }
    }
    printf("Jolly");
}
