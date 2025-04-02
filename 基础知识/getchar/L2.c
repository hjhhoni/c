#include <stdio.h>
#include <ctype.h>
 
// 函数getNextFour接受一个字符c，如果是字母，则返回其后第四个字母，否则返回原字符
char getNextFour(char c) {
    if (isalpha(c)) {           //isalpha(c)是一个函数，用于检测c是不是字母
        if (c >= 'a' && c <= 'z') {
            return (c - 'a' + 4) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            return (c - 'A' + 4) % 26 + 'A';
        }
    }
    return c; // 如果不是字母，返回原字符
}
 
// 主函数，读取用户输入的字符串，并将其中的每个字母转换为其后第四个字母后输出
int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
        printf("%c", getNextFour(input[i]));
    }
    printf("\n");
 
    return 0;
}    