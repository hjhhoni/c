# include <stdio.h>
int main()
{
    int jjdq = 0; 
    int chuxu = 0;
    int kaixiao = 0;
    int month = 1;
    for (month = 1; month <= 12; month++)
    {
        scanf("%d", &kaixiao);
        jjdq += 300;
        jjdq -= kaixiao;
        if (jjdq >= 100)
        {
            chuxu += jjdq / 100 * 100;
            jjdq %= 100;
        }
        if (jjdq < 0) 
        {
            printf("%d", -month);
            return 0;
        }
    }
    printf("%d", jjdq + chuxu * 1.2);
}