#include <stdio.h>
int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF)
    {
        int Sn=0,d=1;
        int k=b;
        for (int i=1;i<=a;i++)
        {
            Sn+=b;
            d*=10;
            b+=(k*d);
        }
        printf("%d\n",Sn);
    }
    return 0;
}