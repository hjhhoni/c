#include <stdio.h>
int main(){
    //计算多项式的值2
    int n;
    float x,sum=1;
    scanf("%f %d",&x,&n);
    float k=1;
    for(int i=1;i<=n;i++){
        k*=x;
        sum+=k;
    }
    printf("%.2f",sum);

}