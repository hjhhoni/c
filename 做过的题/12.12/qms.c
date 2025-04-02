#include <stdio.h>

int factor(int n){
    int sum=0;
    for(int i=n/2;i>=1;i--){  //找因子从一半开始找就可以找全，减小复杂度
        if(n%i==0) sum+=i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // 从1到n
        for(int j=i+1;j<=n;j++){ //找比i大的数j，看看i和j能不能组成亲密数
            if(factor(i)==j&&factor(j)==i) printf("%d %d ",i,j);  //若可以就输出
        }
    }
    return 0;
}