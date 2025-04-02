#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) s++;
        if(s>1) {printf("No");return 0;}
    }
    int wei=0,a[7],sum=0;
    for(;n>0;wei++){
        a[wei]=n%10;
        n/=10;
    }
    for(int i=0;i<wei;i++){
        for(int j=wei-1;j>i;j--){
            a[i]*=10;
        }
        sum+=a[i];
    }
    for(int i=1;i<=sqrt(sum);i++){
        if(sum%i==0) s++;
        if(s>2) {printf("No");return 0;}
    }
    printf("Yes");
    return 0;
}