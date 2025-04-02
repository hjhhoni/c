#include <stdio.h>
#include <stdbool.h>
bool isPrime[32768];
int main() {
    for(int i=0;i<=32767;i++){
        isPrime[i]=true;
    }
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=32767;i++){
        if (isPrime[i])
        {
            for(int j=i*i;j<=32767;j+=i){
                isPrime[j]=false;
            }
        }
        
    }
    int n,sum=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(isPrime[i]){
            for(int j=n/2;j<=n;j++){
                if (isPrime[j]&&i+j==n)
                {
                    sum++;
                }
            }
        }
    }
    
    printf("%d",sum);
}
