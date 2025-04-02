#include <stdio.h>
int c[502][502]={0},cc[502][502][2]={0};
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++){
        int v=1;
        for(int j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
            if(c[i][j]!=0){
                cc[i][v][0]=j; //列
                cc[i][v][1]=c[i][j]; //数
                v++;
            }
        }
    }
    for(int i=1;i<=m;i++){
        int v=1;
        while (cc[i][v][0])
        {
            printf("%d %d %d\n",i,cc[i][v][0],cc[i][v][1]);
            v++;
        }
        
    }
}   
