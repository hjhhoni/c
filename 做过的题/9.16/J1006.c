#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long k=n*2-1;
    for(int i=1;i<=k;i++){
        long long m;
        if (i<=(k-1)/2)
        {
            m=i*2-1;
        }else{
            m=(k-i)*2+1;
        }
        for(int j=n-1;j>=1;j--){
            printf(" ");
        }
        for(int j=1;j<=m;j++){
            printf("*");
        }
        for(int j=n-1;j>=1;j--){
            printf(" ");
        }
        if (i<=(k-1)/2)
        {
            n--;
        }else{
            n++;
        }
        
        printf("\n");
    }
}