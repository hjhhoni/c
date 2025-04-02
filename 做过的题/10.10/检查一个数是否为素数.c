#include <stdio.h>
#include <stdbool.h>
bool isPrime[1000001];
int main() {
    for(int i=0;i<=1000000;i++){
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=1000000;i++){
        if (isPrime[i])
        {
            for(int j=i*i;j<=1000000;j+=i){
                isPrime[j]=false; //i的倍数都不为质数
            }
        }
        
    }

    int n;
    scanf("%d",&n);
    if(isPrime[n]){
        printf("Y");
    }else{
        printf("N");
    }
    
}
