#include <stdio.h>
int b[1000010];
int main(){
    int n,k;
    scanf("%d",&n);
    k=n;
    while (n--)
    {
        int a;
        scanf("%d",&a);
        b[a]++;
    }
    for(int i=1;i<=1000000;i++){
        if (b[i]!=0)
        {
            printf("%d %d\n",i,b[i]);
        }
    }
}
