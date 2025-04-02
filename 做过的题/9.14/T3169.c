#include <stdio.h>
#include <math.h>
int main() {
    int n;
    while (scanf("%d",&n)!=EOF) { //scanf读不到数据时会返回EOF
        if (n>1000)
        {
            printf("输入错误\n");
        }else if (n<=1000)
        {
            n=sqrt(n);
            printf("%d\n",n);
        }
    }
    return 0;
}
