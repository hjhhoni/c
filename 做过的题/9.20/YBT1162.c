#include <stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    float n,sum=0;
    for(float i=1;;i++){
        sum+=1.0/i;
        if(sum>=m){
            n=i;
            break;
        }
    }
    printf("%.0f",n);
}