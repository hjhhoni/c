#include <stdio.h>
int main(){
    int n,k=1,n1;
    scanf("%d",&n);
    double s[n];
    do{
        scanf("%d",&n1);
        double a=1,b=2,c,sum=0;
        for(int i=1;i<=n1;i++){
            sum+=(double)(b/a);
            c=a+b;a=b;b=c;
            //此为斐波那契数列,避免数值溢出double储存的最大有效数字
            if(c>1000){a/=1000.0;b/=1000.0;c/=1000.0;}
        }
        s[k-1]=sum;
        k++;
    }
    while (k<=n);
    
    for(int i=0;i<n;i++){
        printf("%.2lf\n",s[i]);
    }
}