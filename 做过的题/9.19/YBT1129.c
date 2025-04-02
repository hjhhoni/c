#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char c[255];
    int j=0,l;
    while (scanf("%s",c)!=EOF)
    {
        l=strlen(c);
        for(int i=0;i<l;i++){
            if(isdigit(c[i])){
                j++;
            }
        }
    }
    printf("%d",j);

}