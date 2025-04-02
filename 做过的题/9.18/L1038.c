#include <stdio.h>
int main()
{
    int v, limv;
    while (scanf("%d %d", &v, &limv)!=EOF)
    {
        if ((float)v / limv - 1 < 0.1)
            printf("OK\n");
        else if ((float)v / limv - 1 < 0.5)
            printf("Exceed %.0f%%. Ticket 200\n", ((float)v / limv - 1) * 100);
        else
            printf("Exceed %.0f%%. License Revoked\n", ((float)v / limv - 1) * 100);
    }
    return 0;
}
