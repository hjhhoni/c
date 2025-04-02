#include <stdio.h>
int main(){
    float n,sum;
    scanf("%f",&n);
    for(float i=1;i<=n;i++){
        sum+=1/i;
    }
    printf("sum = %.6f",sum);
}