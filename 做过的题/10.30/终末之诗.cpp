#include <stdio.h>
#include <string.h>

int main(){
    int n,a[27]={0};
    scanf("%d",&n);
    char c[1001][101]={'\0'};
    for(int i=0;i<n;i++){
        scanf("%s",c[i]);
        int len=strlen(c[i]);
        for(int is=0;is<len;is++)
        {
            int k=c[i][is]-'a';
            a[k]++;
        }
    }
    int fs=0;
    for(int i=0;i<n;i++){
        int len=strlen(c[i]);
        for(int j=0;j<26;j++){
            if (a[j]==len)
            {
                int f=0;
                char k=j+'a';
                for(int v=0;v<len;v++){
                    if (c[i][v]==k)
                    {
                        f=1;
                        break;
                    }
                    
                }
                if (f==0)
                {
                    printf("%s\n",c[i]);
                    fs=1;
                    break;
                }
                
            }
            
        }
    }
    if (fs==0)
    {
        printf("-1\n");
    }
}