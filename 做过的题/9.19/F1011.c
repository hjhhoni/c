#include <stdio.h>
int main(){
    int n,b=0;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    for(int i=0;i<n;i++){
        if (c[i]=='a')
        {
            b++;
            break;
        }
    }
    if (b>0)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
}