#include <stdio.h>
#include <stdlib.h>
int max=0,W,H,xc,yc;
char arr[21][21]={0};
void dfs(int y,int x){
    if(y==H||x==W||y<0||x<0||arr[y][x]=='#') return;
    max++;
    arr[y][x]='#';

    dfs(y+1,x);
    dfs(y-1,x);
    dfs(y,x+1);
    dfs(y,x-1);
    return;
}
int main() {
    while (scanf("%d %d",&W,&H)&&(W!=0&&H!=0))
    {
        max=1;
        for(int i=0;i<H;i++){ //数组从0,0开始
            scanf("%s",arr[i]);
        }
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if (arr[i][j]=='@')
                {
                    xc=j;
                    yc=i;
                    goto ccc;
                }
            }
        }
        ccc:
        dfs(yc,xc); //传入行，列
        printf("%d\n",max-1);
    }
    
}
