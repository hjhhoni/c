#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if(n==0&&m==0) printf("YES");
    else
    {
        if(m>2*n-1||m>229029||(m%2==0&&m!=0))printf("NO");
        else printf("YES");
    }

}
