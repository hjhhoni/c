#include <stdio.h>

int main() {
    int R,S,c[40][40]={0};
    scanf("%d %d",&R,&S);
    for(int i=1;i<=R;i++){
        for(int j=1;j<=i;j++){
            c[j][i]=S;
            if(S==9) S=1;
            else S++;
        }
    }

    for(int i=1;i<=R;i++){
        for(int j=1;j<=R;j++){
            if(c[i][j]==0) printf(" ");
            else printf("%d",c[i][j]);
        }
        printf("\n");
    }
}
