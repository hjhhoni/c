#include <stdio.h>
// 设有一头小母牛，从出生第四年起每年生一头小母牛，按此规律，第
// N年时有几头母牛？
void birth(int time, int deadline, int *sum)
{
    for (int i = time; i <= deadline; i++)
    {
        if ((i - time) >= 3)
        {
            birth(i, deadline, sum); //看看第i头牛可以birth几次;
            (*sum)++; //每四年生一头
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 1;
    birth(1, n, &sum);
    printf("%d", sum);
}
