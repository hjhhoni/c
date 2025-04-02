#include <stdio.h>
#include <string.h>

int main()
{
	
	int find(char * str, char * strFind);
	
	char str[101], strFind[101], strReplace[101];
	
	int findPos;
	
	// 输入原始字符串
	gets(str);
	
	// 输入要查找的字符串
	gets(strFind);
	
	// 输入要替换的字符串
	gets(strReplace);
	
	findPos = find(str, strFind);
	
	if(findPos != -1)
	{
	    // 输出查找到的位置
	    printf("%d\n", findPos);
	    // 进行替换操作，直接影响 str
        for(int i=0;i<findPos;i++){
            printf("%c",str[i]);
        }
        int len=strlen(str);
        int lenF=strlen(strFind);
        int lenh=strlen(strReplace);
        for(int i=0;i<lenh;i++){
            printf("%c",strReplace[i]);
        }
        for(int i=findPos+lenF;i<len;i++){
            printf("%c",str[i]);
        }
	}
	else {
		printf("-1");
	}
	
	return 0;
}

// str 为原始字符串，strFind为要查找的字符串
// 返回值为strFind在str中的起始位置，如果不存在，请返回-1
// 注意：只查找第一次出现的位置
int find(char * str, char * strFind)
{
	// 请补充下面的代码
    int len=strlen(str);
	int lenF=strlen(strFind);
    for(int i=0;i<=len-lenF;i++){
        if(strncmp(str+i,strFind,lenF)==0) return i;
    }
    return -1;
}
