#include <string.h>
#include <stdio.h>
int main(){
    char a[100];
    while (scanf("%s",a)!=EOF)
    {
        int la=strlen(a);
        for(int i=0;i<=la-1;i++){
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                a[i]+=32;
            }
        }
        if (
            (a[la-2]=='c'&&a[la-1]=='h')
            ||(a[la-2]=='s'&&a[la-1]=='h')
            )
        {
            la+=2;
            a[la-2]='e';
            a[la-1]='s';
        }else if (a[la-1]=='s'||a[la-1]=='x'||a[la-1]=='o')
        {
            la+=2;
            a[la-2]='e';
            a[la-1]='s';
        }else if (a[la-1]=='y'&&
                    a[la-2]!='a'&&
                    a[la-2]!='o'&&
                    a[la-2]!='i'&&
                    a[la-2]!='u'&&
                    a[la-2]!='e'
        )
        {
            la+=2;
            a[la-3]='i';
            a[la-2]='e';
            a[la-1]='s';
        }else{
            la++;
            a[la-1]='s';
        }
        for(int i=0;i<=la-1;i++){
            printf("%c",a[i]);
        }
        printf("\n");
    }
    
    
}