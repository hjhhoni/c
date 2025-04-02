#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int a=0;
        for(int j=1;j<=sqrt(i);j++){
            if (i%j==0)
            {
                a++;
            }
            if (a>1)
            {
                break;
            }
        }
        if (a==1)
        {
            printf("%d\n",i);
        }
    }
}