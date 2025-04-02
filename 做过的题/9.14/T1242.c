#include <stdio.h>
#include <ctype.h>
int main(){
    int a=0,m=0,k=0;
    char input[10001];
    fgets(input,sizeof(input),stdin);
    for (int i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
        if (isalpha(input[i]))
        {
            a+=1;
        }else if (input[i]==' ')
        {
            k+=1;
        }else if (isdigit(input[i]))
        {
            m+=1;
        }
        
        
    }
    printf("%d %d %d",a,m,k);
    return 0;
}