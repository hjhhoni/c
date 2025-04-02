#include <stdio.h>
#define min(a,b) a<b
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int sum=min(a,min(b,min(c,d)));
    printf("%d",sum);
}
