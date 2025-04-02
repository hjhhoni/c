#include <stdio.h>
#include <stdbool.h>
int main() {
    bool isPrime[101];//默认全部为素数
    // 初始化所有数为素数
    for (int i = 0; i <= 100; i++) {
        isPrime[i] = true;
    }
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<=100;i++){  //写法与i<=sqrt(100)一样
        if(isPrime[i]){
            for(int j=i*i;j<=100;j+=i){ //i的倍数都不是素数
                isPrime[j]=false;
            }
        }
    }
    int i=4;
    for(;i<=100;){
        end:
        i+=2;
        for(int q=3;q<i;q++){
            for(int h=q;h<=i-q;h++){
                if (isPrime[q]&&isPrime[h]&&h+q==i)
                {
                    printf("%d=%d+%d\n",i,q,h);
                    if(i==100) return 0;
                    goto end;
                }
                
            }
        }
    }
}
