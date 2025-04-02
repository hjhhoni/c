#include <stdio.h>
int main(){
    char a,b,c;
    //键盘输入字符先放在缓冲区，回车才分配到a,b,c
    a=getchar();
    b=getchar();
    c=getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    return 0;
}