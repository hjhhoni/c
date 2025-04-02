#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int n=0;
    while (x<y)
    {
        x*=2;
        n++;
    }
    printf("%d",n);
}
