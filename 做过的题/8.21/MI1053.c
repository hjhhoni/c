#include <stdio.h>
int main(){
    //级数求和1
    int a;
    double b=0,c=1;  
    scanf("%d",&a);

    for(;b<=a;c++){
        b+=1/c;
    }
    printf("%d\n",(int)c-1);
}