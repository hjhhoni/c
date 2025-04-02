#include <stdio.h>
#include <string.h>

void find_and_replace(char *str, char *strFind, char *strReplace) {
    char *pos = strstr(str, strFind); // 查找strFind在str中的位置

    // 如果未找到，输出-1并返回
    if (pos == NULL) {
        printf("-1\n");
        return;
    }

    // 输出子串的起始位置
    int index = pos - str; // 计算位置
    printf("%d\n", index);

    // 创建新的字符串
    char result[101]; // 假设输入长度不超过100
    int i = 0, j = 0;

    // 替换过程
    while (str[i] != '\0') {
        // 找到要替换的子串
        if (strstr(&str[i], strFind) == &str[i]) {
            // 替换
            strcpy(&result[j], strReplace);
            j += strlen(strReplace);
            i += strlen(strFind);
        } else {
            // 复制字符
            result[j++] = str[i++];
        }
    }
    result[j] = '\0'; // 添加字符串结束符

    // 输出替换后的字符串
    printf("%s\n", result);
}

int main() {
    char origin_str[101]; // 原始字符串
    char strFind[101];    // 要查找的字符串
    char strReplace[101]; // 要替换的字符串

    // 输入部分
    fgets(origin_str, 101, stdin);
    origin_str[strcspn(origin_str, "\n")] = 0; // 去除换行符

    fgets(strFind, 101, stdin);
    strFind[strcspn(strFind, "\n")] = 0;

    fgets(strReplace, 101, stdin);
    strReplace[strcspn(strReplace, "\n")] = 0;

    // 调用函数
    find_and_replace(origin_str, strFind, strReplace);

    return 0;
}
