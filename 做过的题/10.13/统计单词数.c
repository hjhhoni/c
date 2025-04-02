#include <stdio.h>
#include <string.h>
#include <ctype.h>

void strlower(char str[]) // 定义strlower函数，将字符串全部转换为小写
{
    for (int i = 0; str[i]; i++)
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
}

int main(void)
{
    char word[11] = {0};         // 单词
    char article[1000001] = {0}; // 文章

    fgets(word, 11, stdin);
    word[strcspn(word, "\n")] = '\0';
    strlower(word); // 输入与转化
    fgets(article, 10000001, stdin);
    article[strcspn(article, "\n")] = '\0';
    strlower(article);

    int count = 0;          // 计数器
    int len = strlen(word); // word的长度
    int position = -1;      // 位置初始化为-1
    char *ptr = article;    // 指针初始化为0

    while ((ptr = strstr(ptr, word)) != NULL) // 调用strstr函数，如果返回空指针，说明在这之后就没有相应的字符了
    {
        if ((ptr == article || isspace(*(ptr - 1))) && (isspace(*(ptr + len)) || *(ptr + len) == '\0')) // 判断条件
        {
            if (position == -1)           // 如果位置还是-1，那就说明还是初始状态
                position = ptr - article; // 位置等于现在的指针减去首字符的指针
            ++count;
            ptr += len; // 跳过检索完的字符
        }
        else
            ++ptr; // 否则指针++
    }
    if (count)
        printf("%d %d\n", count, position);
    else
        printf("%d\n", position);

    return 0;
}
