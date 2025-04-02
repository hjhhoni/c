// #include <stdio.h>
// #include <string.h>

// int main()
// {
	
// 	int find(char * str, char * strFind);
// 	void replace(char * str, char * strFind, char * strReplace);
	
// 	char str[101], strFind[101], strReplace[101];
	
// 	int findPos;
	
// 	// 输入原始字符串
// 	gets(str);
	
// 	// 输入要查找的字符串
// 	gets(strFind);
	
// 	// 输入要替换的字符串
// 	gets(strReplace);
	
// 	findPos = find(str, strFind);
	
// 	if(findPos != -1)
// 	{
// 	    // 输出查找到的位置
// 	    printf("%d\n", findPos);
// 	    // 进行替换操作，直接影响 str
// 		replace(str, strFind, strReplace);
	
//         printf("%s",str);
    
// 	}
// 	else {
// 		printf("-1");
// 	}
	
// 	return 0;
// }

// // str 为原始字符串，strFind为要查找的字符串
// // 返回值为strFind在str中的起始位置，如果不存在，请返回-1
// // 注意：只查找第一次出现的位置
// int find(char * str, char * strFind)
// {
// 	// 请补充下面的代码
// 	for(int i=0;*(str+i)!='\0';i++){
//         int k=1;
//         for(int j=0;*(strFind+j)!='\0';j++){
//             if(*(str+i+j)!=*(strFind+j)) k=0;
//         }
//         if(k==1) return i;
//     }
//     return -1;
// }

// // 替换操作，直接影响原始字符串 str
// void replace(char * str, char * strFind, char * strReplace)
// {
// 	// 请补充下面的代码
// 	for(int i=0;*(str+i)!='\0';i++){
//         int k=1;
//         for(int j=0;*(strFind+j)!='\0';j++){
//             if(*(str+i+j)!=*(strFind+j)) k=0;
//         }
//         if(k==1){
//             int len=strlen(strFind),v=0;
//             strcpy(strFind, strReplace);
//             for(int js=i+len;str[js]!='\0';js++,v++){
//                 strReplace[v]=str[js];
//             }
//             len=strlen(strFind);
//             int vs=0;
//             for(;len!=0;len--,i++,vs++){
//                 str[i]=strFind[vs];
//             }
//             int vss=0;
//             for(;v!=0;v--,i++,vss++){
//                 str[i]=strReplace[vss];
//             }
//         }
//     }
// }
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
