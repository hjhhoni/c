#include <stdio.h>
#include <string.h>
int main(){
    int m;
    scanf("%d",&m);
    int n=2;
    long long shu=1;
    if(shu%m==0){
        printf("1");
        return 0;
    }
    while (1)
    {
        shu%=m;
        int k=n;
        k%=m;
        shu*=k;
        if (shu%m==0||k==0)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
}