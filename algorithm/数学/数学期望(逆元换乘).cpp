#include <stdio.h>
#include <math.h>
#define P 998244353
typedef long long ll;
//期望E(x)=x1*p1+x2*p2+x3*p3,p1+p2+p3=1
ll fpm(ll a,int b,int p){ //a的b次方mod p
    ll result=1%p;
    a=a%p;
    while (b>0)
    {
        if (b%2==1)
        {
            result=(result*a)%p;
        }
        a=(a*a)%p;
        b=b>>1; //左移一位，相当于除2
    }
    return result;
}
int main() {
    ll n,ns;
    scanf("%lld",&n);
    ns=n;
    int t[4]={0}; //桶，记录多少个1，2，3
    int k;
    while (ns--)
    {
        scanf("%d",&k);
        t[k]++;
    }
    int a=t[1],b=t[2]*2,c=t[3]*3; 
    // (a+b+c)/n (mod99.....)
    // 相当于 (((a+b+c)mod99..)*(n-1)mod99..)mod99.. (n-1为n的逆元)
    n=fpm(n,P-2,P); 
    //根据费马小定理,若p是质数，n的p-2次方为n模p意义下的乘法逆元
    printf("%lld",((a+b+c)*n)%P);
    return 0;
}
// #include <stdio.h>
// int main() {
//     double p;
//     int n;
//     scanf("%d",&n);
//     p=1.0/n;
//     double sum=0;
//     for(int i=1;i<=n;i++){
//         int a;
//         scanf("%d",&a);
//         sum+=a*p;
//     }
//     printf("%d",(int)sum%998244353);
// }