#include <stdio.h>
int main(){
    float n;
    char level;
    scanf("%f",&n);
    n=n/10.0;
    int k;
    k=n;
    switch (k)
    {
    case 10: 
        level='A';
        break;
    case 9:
        level='A';
        break;
    case 8:
        level='B';
        break;
    case 7:
        level='C';
        break;
    case 6:
        level='D';
        break;
    default:
        level='E';
        break;
    }
    printf("%c",level);
    return 0;
}