#include<stdio.h>
int main()
{
    int n,m,a,b,c,d,judge;
    scanf("%d %d",&n,&m);
    a=n/100;
    b=m/100;
    c=n%100;
    d=m%100;
    judge=d-c;
    if(judge<0){
        printf("%02d:%02d",b-a-1,60+judge);
    }
    else{
        printf("%02d:%02d",b-a,judge);
    }
    return 0;
}
