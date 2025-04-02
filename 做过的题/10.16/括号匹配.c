#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    char c[102]={'\0'};
    scanf("%s",c);
    if (n%2==1)
    {
        printf("false");
    }else{
        for(int i=0;i<n/2;i++){
            if (c[i]!='('||c[n-i-1]!=')')
            {
                printf("false");
                return 0;
            }
            
        }
        printf("true");
    }
    
}
