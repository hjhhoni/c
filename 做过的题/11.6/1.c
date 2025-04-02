#include <stdio.h>
#include <string.h>

int main() {
    char str[310];
    gets(str);
    const char s[1] = "";
    char *token;

    // 获取第一个子字符串
    token = strtok(str, s);

    // 继续获取其他子字符串
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}
