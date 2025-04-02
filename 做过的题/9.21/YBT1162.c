#include <stdio.h>
#include <string.h>
int main(){
    char l[500];
    scanf("%s",&l);
    int ll=strlen(l);
    for(int i=ll-1-1;i>=0;i--){
        printf("%c",l[i]);
    }
}   