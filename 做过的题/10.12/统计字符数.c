#include <stdio.h>
#include <string.h>
int c[26]={0};
int main() {
    char s[1001]={"\0"};
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        c[s[i]-'a']++;
    }
    int max=0;
    char cs;
    for(int i=0;i<26;i++){
        if(c[i]>max) {max=c[i];cs=i+'a';}
    }
    printf("%c %d",cs,max);
} 
