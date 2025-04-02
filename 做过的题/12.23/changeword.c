#include <stdio.h>
#include <string.h>

int main() {
    char s[210];
    char a[110];
    char b[110];
    gets(s);
    gets(a);
    gets(b);
    
    int i=0;
    for(;i<strlen(s);i++){
        if(strncmp(&s[i],a,strlen(a))==0&&i!=0&&s[i-1]==' '&&(s[i+strlen(a)]==' '||i+strlen(a)==strlen(s))){ // 其余特判前面是不是空格，并且后面是不是空格或超范围
            printf("%s ",b);
            i+=strlen(a);
            continue;
        }else if(strncmp(&s[i],a,strlen(a))==0&&i==0&&s[strlen(a)]==' '){ // 首个特判后面是不是空格
            printf("%s ",b);
            i+=strlen(a);
            continue;
        }
        
        printf("%c",s[i]);
    }    
    return 0;
}