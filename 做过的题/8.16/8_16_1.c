#include <stdio.h>
//符号三角形
int main(){
    char a;
    scanf("%c",&a);
    printf("  ");
    printf("%c\n",a);
    printf(" ");
    printf("%c%c%c\n",a,a,a);
    printf("%c%c%c%c%c",a,a,a,a,a);
}