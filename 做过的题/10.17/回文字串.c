#include <stdio.h>
#include <string.h>
int main() {
    char c[51]={'\0'};
    scanf("%s",c);
    int len=strlen(c);
    for(int i=0;i<len/2;i++){
        if (c[i]!=c[len-i-1])
        {
            printf("false");
            return 0;
        }
        
    }
    printf("true");
}
