#include <stdio.h>
#include <string.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    char s[100001]={'\0'};
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<=len-n;i++){
        char a[n+1];
        for(int j=1;j<=n;j++){
            a[j]=s[i+j-1];
        }
        int m=1;
        for(int j=1;j<=n/2;j++){
            if(a[j]!=a[n-j+1]) m=0;
        }
        if(m==1)sum++;
    }
    printf("%d",sum);
}
