#include <stdio.h>
long long fc(long long n){
    int c[10]={0},i=0;
    long long sum=0;
    printf("%lld->",n);
    for(;n>=1;n/=10){
        i++;c[i]=n%10; //倒序分解数字
        sum+=c[i]*c[i];
    }
    for(int j=1;j<=i;j++){
        printf("%d*%d",c[j],c[j]);
        if(j!=i) printf("+");
        else printf("=%lld\n",sum);
    }
    if(sum==1||sum==145){
        return 0;
    }else
    {
        return fc(sum);
    }
    
}
int main(){
    long long n;
    scanf("%lld",&n);
    if(n==1){
        printf("1");
    }else if (n==145)
    {
        printf("145");
    }else{
        fc(n);
    }

}