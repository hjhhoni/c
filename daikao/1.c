#include <stdio.h>
// 考察条件判断

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("a=%d,b=%d",a,b);
    return 0;
}