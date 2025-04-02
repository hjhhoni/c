#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "ni hao diao mao";  // strlen不算'\0'但是算空字符' '
    char brr[] = "ni\0hao\0gemen";  // 只读两个

    printf("%d\n",strlen(arr));
    printf("%d",strlen(brr));
    return 0;
}