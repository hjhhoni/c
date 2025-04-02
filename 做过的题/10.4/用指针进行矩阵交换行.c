#include <stdio.h>

int main() {
    int c[5][5],m,n;
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            scanf("%d",&c[i][j]);
        }
    }
    scanf("%d %d",&m,&n);
    int *p1,*p2,temp;
    for(int i=0;i<=5;i++){
        p1=*(c+m-1)+i;
        p2=*(c+n-1)+i;
        temp=*p1;*p1=*p2;*p2=temp;
    }
    temp=*p1;*p1=*p2;*p2=temp;
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
