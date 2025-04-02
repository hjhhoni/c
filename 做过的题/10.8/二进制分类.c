#include <stdio.h>

int main() {
    int A=0,B=0;
    for(int i=1;i<=1000;i++){
        int c[2]={0};
        for(int j=i;j>=1;j/=2){
            if(j%2==0) c[0]++;
            else c[1]++;
        }
        if(c[0]>=c[1]) B++;
        else A++;
    }
    printf("%d %d",A,B);
}
