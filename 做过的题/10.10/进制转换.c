#include <stdio.h>

int main() {
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        if(n==0) printf("0-->0\n");
        else{
            int c[100000]={0},v=0;
            if(n>=0){
                printf("%d-->",n);
            }else{
                printf("%d-->-",n);
            }
            if(n<0) n=-n;
            for(;n>=1;n/=2){
                c[v]=n%2;
                v++;
            }
            for(;v-1>=0;v--){
                printf("%d",c[v-1]);
            }
            printf("\n");
        }
    }
    
}
