#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
    gets(a);
    int count=0,Max=0;
    char *p = a;
    int i=0;
    while (a[i]!='.')
    {
        if(a[i]==' '){
            if(count<Max){  //如果不是最大
                count = -1;
            }else{
                Max = count;
                p = &a[i] - sizeof(char)*count;
                count = -1;
            }
        }
        count++;
        i++;
    }
    if(count<Max){  //如果不是最大
        count = -1;
    }else{
        Max = count;
        p = &a[i] - sizeof(char)*count;
        count = -1;
    }
    while (*p!=' '&&*p!='.')
    {
        printf("%c",*p);
        p = p+1;
    }
    
}