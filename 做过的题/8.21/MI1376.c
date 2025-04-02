#include <stdio.h>
int main(){
    //级数求和2
    int k;
    //用float会出错
    double Sn=0,a=1;
    scanf("%d",&k);
    while (Sn<k)
    {
        Sn+=1/a;
        a++;
    }
    // printf("%f",Sn);
    printf("%d",(int)a-1);
}