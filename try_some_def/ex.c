#include<stdio.h>
int main()
{
    int m=5;
    if (m++ > 5)
        printf("%d", m);
    else
        printf("%d", m--);
    return 0;
}