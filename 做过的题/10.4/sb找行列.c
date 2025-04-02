#include <stdio.h>

int main() {
    int n,id,jd;
    int c[100][100][2]={0};
    scanf("%d %d %d",&n,&id,&jd);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j][0]=i;
            c[i][j][1]=j;
        }
    }
    //同行
    for(int i=1;i<=n;i++){
        printf("(%d,%d) ",c[id][i][0],c[id][i][1]);
    }
    printf("\n");
    //同列
    for(int i=1;i<=n;i++){
        printf("(%d,%d) ",c[i][jd][0],c[i][jd][1]);
    }
    printf("\n");
    //左上右下
    int is=id,js=jd;
    while (1)
    {
        if(is==1||js==1) break;
        else {is--;js--;}
    }
    
    for(;is!=n+1&&js!=n+1;){
        printf("(%d,%d) ",is,js);
        is++;js++;
    }
    printf("\n");
    //左下右上
    is=id,js=jd;
    while (1)
    {
        if(is==n||js==1) break;
        else {is++;js--;}
    }
    
    for(;is!=0&&js!=n+1;){
        printf("(%d,%d) ",is,js);
        is--;js++;
    }

}
